
def hello_world():
	print("hello world")


def add_two_number(a: int, b: int):
	return a + b

def bubble_sort(arr: List[int]):
    n = len(arr)
    temp = None
    for i in range(n):
        # Track if a swap has occurred
        swapped = 0
        for j in range(0, n - i - 1):
            # Swap if the element found is greater than the next element
            if arr[j] > arr[j + 1]:
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
                swapped = 1
        # If no elements were swapped, the array is already sorted
        if not swapped:
            break
    return arr
