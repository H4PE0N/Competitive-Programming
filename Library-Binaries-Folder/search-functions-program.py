
#######################################################
import json; import sys as console
#######################################################

#######################################################
def console_command_handler(command:str,functions:dict,
    arguments: list) -> None:
    if(command == "search"):
        keywords: list = arguments[1:]
        show_search_function_names(functions, keywords)
    elif(command == "show"):
        function: str = arguments[1]
        show_function_information(functions, function)
#######################################################

#######################################################
def show_search_function_names(functions:dict,keywords:
    list) -> None:
    matched:list = search_functions_keywords(functions,
        keywords)
    for index, function in enumerate(matched, 1):
        print("FUNCTION [%d]\t:\t%s"%(index, function))

def show_function_information(functions: dict, function:
    str) -> None:
    if(function in functions.keys()):
        show_function_description(functions, function)
        show_function_parameters(functions, function)
        show_function_returning(functions, function)
#######################################################

#######################################################
def update_matched_functions(functions: list, function:
    str, keywords: list) -> list:
    word_array = break_down_function_name(function,"_")
    for keyword in keywords:
        if(keyword not in word_array and keyword):
            return functions
    functions.append(function); return functions

def search_functions_keywords(functions: dict,keywords:
    list) -> list:
    matched: list = []
    for function in functions.keys():
        matched = update_matched_functions(matched,
            function, keywords)
    return matched
#######################################################

#######################################################
def show_function_description(functions: dict,function:
    str) -> None:
    description:list=functions[function]["description"]
    [print("%s" % string) for string in description]
    print("")

def show_function_parameters(functions: dict, function:
    str) -> None:
    parameters:list = functions[function]["parameters"]
    for index, parameter in enumerate(parameters, 1):
        print("PARAMETER [%d]\t:\t%s" % (index,
            parameter))
    print("")

def show_function_returning(functions: dict, function:
    str) -> None:
    returning: str = functions[function]["returning"]
    print("RETURNING\t:\t%s" % (returning))
#######################################################

#######################################################
def collect_function_section(word_array: list,function:
    str, breakpoint: str) -> list:
    for index, letter in enumerate(function):
        if(letter == breakpoint):
            word_array.append(function[:index])
            return word_array
    word_array.append(function); return word_array

def remove_function_section(function: str, breakpoint:
    str) -> str:
    for index, letter in enumerate(function):
        if(letter == breakpoint):
            function = function[(index + 1):]
            return function
    return None

def break_down_function_name(function: str, breakpoint:
    str) -> list:
    word_array: list = []
    while(function != None and len(function) != 0):
        word_array=collect_function_section(word_array,
            function, breakpoint)
        function = remove_function_section(function,
            breakpoint)
    return word_array
#######################################################

#######################################################
def collect_functions_information(filename: str)->dict:
    with open(filename, "r") as file_object:
        information: dict = json.load(file_object)
    return information
#######################################################

#######################################################
arguments: list=console.argv[1:];arguments.append(None)
command: str = arguments[0]
filename: str = "../Library-Sources-Folder/\
functions-information.json"

functions: dict=collect_functions_information(filename)
console_command_handler(command, functions, arguments)
#######################################################
