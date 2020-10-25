
#######################################################
import json; import sys as console
#######################################################

#######################################################
def console_command_handler(command, functions,
    arguments):
    if(command == "search"):
        keywords = arguments[1:]
        show_search_function_names(functions, keywords)
    elif(command == "show"):
        function = arguments[1]
        show_function_information(functions, function)
#######################################################

#######################################################
def show_search_function_names(functions, keywords):
    matched = search_functions_keywords(functions,
        keywords)
    for index, function in enumerate(matched, 1):
        print("Function[%d]\t:\t%s" % (index,function))

def show_function_information(functions, function):
    if(function in functions.keys()):
        show_function_description(functions, function)
        show_function_parameters(functions, function)
        show_function_returning(functions, function)
#######################################################

#######################################################
def update_matched_functions(functions, function,
    keywords):
    word_array = break_down_function_name(function,"_")
    for keyword in keywords:
        if(keyword not in word_array and keyword):
            return functions
    functions.append(function); return functions

def search_functions_keywords(functions, keywords):
    matched = []
    for function in functions.keys():
        matched = update_matched_functions(matched,
            function, keywords)
    return matched
#######################################################

#######################################################
def show_function_description(functions, function):
    description = functions[function]["description"]
    print("%s\n" % (description))

def show_function_parameters(functions, function):
    parameters = functions[function]["parameters"]
    for index, parameter in enumerate(parameters, 1):
        print("Parameter[%d]\t:\t%s"%(index,parameter))
    print("")

def show_function_returning(functions, function):
    returning = functions[function]["returning"]
    print("Returning\t:\t%s" % (returning))
#######################################################

#######################################################
def collect_function_section(word_array, function,
    breakpoint):
    for index, letter in enumerate(function):
        if(letter == breakpoint):
            word_array.append(function[:index])
            return word_array
    word_array.append(function); return word_array

def remove_function_section(function, breakpoint):
    for index, letter in enumerate(function):
        if(letter == breakpoint):
            function = function[(index + 1):]
            return function
    return None

def break_down_function_name(function, breakpoint):
    word_array = []
    while(function != None):
        word_array=collect_function_section(word_array,
            function, breakpoint)
        function = remove_function_section(function,
            breakpoint)
    return word_array
#######################################################

#######################################################
def collect_functions_information(filename):
    with open(filename) as file_object:
        information = json.load(file_object)
    return information
#######################################################

#######################################################
arguments = console.argv[1:]; arguments.append(None)
command = arguments[0]
filename = "../Library-Sources-Folder/\
functions-information.json"

functions = collect_functions_information(filename)
console_command_handler(command, functions, arguments)
#######################################################
