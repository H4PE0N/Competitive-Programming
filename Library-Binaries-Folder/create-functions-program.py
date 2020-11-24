
#######################################################
import json; import sys as console
#######################################################

#######################################################
def console_command_handler(command, functions,
    function):
    if(command == "create"):
        functions=create_function_information(function,
            functions)
    elif(command == "delete"):
        functions=delete_function_information(function,
            functions)
    return functions
#######################################################

#######################################################
def delete_function_information(function, functions):
    del functions[function]; return functions

def create_function_information(function, functions):
    information = input_function_information(function)
    functions[function] = information; return functions
#######################################################

#######################################################
def input_function_information(function):
    description = []; MAX_LINES = 3
    for index in range(MAX_LINES):
        description.append(input("").strip())

    parameters = input("\nPARAMETERS\t:\t").split(", ")
    returning = input("\nRETURNING\t:\t")
    return {"description": description, "parameters":
        parameters, "returning": returning}
#######################################################

#######################################################
def collect_functions_information(filename):
    with open(filename, "r") as file_object:
        information = json.load(file_object)
    return information

def update_functions_information(filename, functions):
    with open(filename, "w") as file_object:
        json.dump(functions, file_object, indent = 2)
#######################################################

#######################################################
filename = "../Library-Sources-Folder/\
functions-information.json"
functions = collect_functions_information(filename)

# if(len(console.argv) >= 3):
#     command = console.argv[1]; function=console.argv[2]
#     functions = console_command_handler(command,
#         functions, function)

for function, value in functions.items():
    value["description"] = value["description"].split("\n")

update_functions_information(filename, functions)
#######################################################
