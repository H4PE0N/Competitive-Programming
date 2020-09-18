
################################################################################
LIBRARY_SOURCES_FOLDER := ../Library-Sources-Folder

LIBRARY_OBJECTS_FOLDER := ../Library-Objects-Folder

LIBRARY_BOOTUPS_FOLDER := ../Library-Bootups-Folder
################################################################################

################################################################################
SOURCES_FUNCTIONS_FOLDER := $(LIBRARY_SOURCES_FOLDER)/Library-Functions-Folder

SOURCES_CREATE_FOLDER := $(LIBRARY_SOURCES_FOLDER)/Create-Programs-Folder

SOURCES_TESTING_FOLDER := $(LIBRARY_SOURCES_FOLDER)/Functions-Testing-Folder

SOURCES_BOOTUP_FOLDER := $(SOURCES_CREATE_FOLDER)/Functions-Bootup-Folder
################################################################################

################################################################################
OBJECTS_FUNCTIONS_FOLDER := $(LIBRARY_OBJECTS_FOLDER)/Library-Functions-Folder

OBJECTS_TESTING_FOLDER := $(LIBRARY_OBJECTS_FOLDER)/Functions-Testing-Folder

OBJECTS_CREATE_FOLDER := $(LIBRARY_OBJECTS_FOLDER)/Create-Programs-Folder

OBJECTS_BOOTUP_FOLDER := $(OBJECTS_CREATE_FOLDER)/Functions-Bootup-Folder
################################################################################

################################################################################
SOURCES_FUNCTIONS_PROGRAMS := $(wildcard $(SOURCES_FUNCTIONS_FOLDER)/*/*.c)

SOURCES_TESTING_PROGRAMS := $(wildcard $(SOURCES_TESTING_FOLDER)/*/*.c)

SOURCES_COMPILE_PROGRAM := $(SOURCES_CREATE_FOLDER)/library-compile-program.c

SOURCES_BOOTUP_PROGRAMS := $(wildcard $(SOURCES_BOOTUP_FOLDER)/*.c)
################################################################################

################################################################################
OBJECTS_FUNCTIONS_PROGRAMS := $(patsubst $(LIBRARY_SOURCES_FOLDER)/%.c, \
$(LIBRARY_OBJECTS_FOLDER)/%.o, $(SOURCES_FUNCTIONS_PROGRAMS))

OBJECTS_TESTING_PROGRAMS := $(patsubst $(LIBRARY_SOURCES_FOLDER)/%.c, \
$(LIBRARY_OBJECTS_FOLDER)/%.o, $(SOURCES_TESTING_PROGRAMS))

OBJECTS_COMPILE_PROGRAM := $(OBJECTS_CREATE_FOLDER)/library-compile-program.o

OBJECTS_BOOTUP_PROGRAMS := $(patsubst $(LIBRARY_SOURCES_FOLDER)/%.c, \
$(LIBRARY_OBJECTS_FOLDER)/%.o, $(SOURCES_BOOTUP_PROGRAMS))
################################################################################

################################################################################
COMPILOR := gcc
COMPILING_FLAGS := -lm -Wall
################################################################################

################################################################################
library-compile-program: $(OBJECTS_FUNCTIONS_PROGRAMS) \
	$(OBJECTS_COMPILE_PROGRAM); $(COMPILOR) $(COMPILING_FLAGS) $^ -o $@

functions-bootup-program-%: $(OBJECTS_FUNCTIONS_PROGRAMS) \
	$(OBJECTS_TESTING_PROGRAMS) \
	$(OBJECTS_BOOTUP_FOLDER)/functions-bootup-program-%.o
	$(COMPILOR) $(COMPILING_FLAGS) $^ -o $@
################################################################################

################################################################################
$(OBJECTS_BOOTUP_FOLDER)/%.o: $(SOURCES_BOOTUP_FOLDER)/%.c \
	$(OBJECTS_FUNCTIONS_PROGRAMS) $(OBJECTS_TESTING_PROGRAMS)
	$(COMPILOR) $(COMPILING_FLAGS) $< -c -o $@

$(OBJECTS_COMPILE_PROGRAM): $(SOURCES_COMPILE_PROGRAM)
	$(COMPILOR) $(COMPILING_FLAGS) $^ -c -o $@

$(OBJECTS_FUNCTIONS_FOLDER)/%.o: $(SOURCES_FUNCTIONS_FOLDER)/%.c
	$(COMPILOR) $(COMPILING_FLAGS) $^ -c -o $@

$(OBJECTS_TESTING_FOLDER)/%.o: $(SOURCES_TESTING_FOLDER)/%.c
	$(COMPILOR) $(COMPILING_FLAGS) $^ -c -o $@
################################################################################

################################################################################
remove-object-programs:
	rm -f $(LIBRARY_OBJECTS_FOLDER)/*/*/*.o $(LIBRARY_OBJECTS_FOLDER)/*/*.o

remove-bootup-programs:
	rm -f library-compile-program functions-bootup-program-*
################################################################################
