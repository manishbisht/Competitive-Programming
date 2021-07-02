def can_create(list_of_strings, input_string):
    for x in list_of_strings:
        input_string = input_string.replace(x , ' ', len(input_string))
    for x in input_string:
        if x != " ":
            return False
    return True


list_of_strings = ["back", "end", "front", "tree"]
print can_create(list_of_strings, "backend")
print can_create(list_of_strings, "frontyard")
print can_create(list_of_strings, "frontend")