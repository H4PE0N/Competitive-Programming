
################################################################################
import json; import sys as console
################################################################################

################################################################################
def collect_functions_information(filename: str) -> dict:
    with open(filename) as file_object:
        information = json.load(file_object)
    return information
################################################################################

################################################################################
def update_mateched_functinos(functions: list, func_name: str,
    keywords: list) -> list:
    for index, keyword in enumerate(keywords):
        if(keyword not in func_name.split("_")):
            return functions
    functions.append(func_name); return functions

def search_functinos_keywords(functions: dict, keywords: list) -> list:
    matched_functions = []
    for func_name, information in functions.items():
        matched_functions = update_mateched_functinos(matched_functions,
            func_name, keywords)
    return matched_functions
################################################################################

################################################################################
def show_search_function_names(functions: dict, keywords: list) -> None:
    matched_functions = search_functinos_keywords(functions, keywords)
    for index, func_name in enumerate(matched_functions, 1):
        print("{}. {}".format(index, func_name))

def show_function_information(functions: dict, func_name: str) -> None:
    print("Description: {}\n".format(functions[func_name]["description"]))
    print("Parameters: {}\n".format(functions[func_name]["parameters"]))
    print("Returning: {}".format(functions[func_name]["returning"]))
################################################################################

################################################################################
arguments = arguments = console.argv[1:]
filename = "../Library-Sources-Folder/functions-information-file.json"
functions = collect_functions_information(filename)
################################################################################

################################################################################
try:
    if(arguments[0] == "search"):
        keywords = arguments[1:]
        show_search_function_names(functions, keywords)
    elif(arguments[0] == "information"):
        func_name = arguments[1]
        show_function_information(functions, func_name)
except Exception as message:
    pass
################################################################################
