
#######################################################
import json; import sys as console
#######################################################

#######################################################
def console_command_handler(command:str,functions:dict,
    function: str) -> dict:
    if(command == "create"):
        functions=create_function_information(function,
            functions)
    elif(command == "delete"):
        functions=delete_function_information(function,
            functions)
    return functions
#######################################################

#######################################################
def delete_function_information(function:str,functions:
    dict) -> dict:
    del functions[function]; return functions

def create_function_information(function:str,functions:
    dict) -> dict:
    functions[function] = {
        "description": input_function_description(),
        "parameters" : input_function_parameters(),
        "returning"  : input_function_returning()
    }; return functions
#######################################################

#######################################################
def input_function_returning() -> str:
    returning: str = input("\nRETURNING\t:\t").strip()
    return returning

def input_function_description() -> list:
    description: list = [input("").strip() for index in
        range(3)]
    return description

def input_function_parameters() -> list:
    parameters:str = input("\nPARAMETERS\t:\t").strip()
    return parameters.split(", ")
#######################################################

#######################################################
def collect_functions_information(filename: str)->dict:
    with open(filename, "r") as file_object:
        information: dict = json.load(file_object)
    return information

def update_functions_information(filename: str,
    functions: dict) -> None:
    with open(filename, "w") as file_object:
        json.dump(functions, file_object, indent = 2)
#######################################################

#######################################################
filename: str = "../Library-Sources-Folder/\
functions-information.json"
functions: dict=collect_functions_information(filename)

if(len(console.argv) >= 3):
    command: str = console.argv[1]; function: str = \
        console.argv[2]
    functions = console_command_handler(command,
        functions, function)

update_functions_information(filename, functions)
#######################################################
