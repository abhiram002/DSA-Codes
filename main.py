# Input array
arr = [1,1,2,2,3,4,4]

# Dictionary to store the frequency of each element
frequency = {}

# Count the frequency of each element in the array
for element in arr:
    if element in frequency:
        frequency[element] += 1
    else:
        frequency[element] = 1

# Find the unique element
unique_element = None
for key, value in frequency.items():
    if value == 1:
        unique_element = key
        break

# Print the unique element
print("Unique element:", unique_element)
