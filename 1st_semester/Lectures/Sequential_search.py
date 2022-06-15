def search(List):
    i = 0
    while i < len(List):
        value_to_sort = List[i]

        while (List[i-1] > List[i] and i > 0):
            List[i], List[i-1] = List[i-1], List[i]
            i = i - 1

        i = i + 1
    return List


Lista = ['Alex', 'Juan', 'Sofia', 'Alvaro', 'Pepe', 'Fernnando', 'Miuel',
         'Kevin', 'Mario', 'Toledo', 'Mbappe', 'Messi', 'Clara', 'Zac', 'Xavi']
print(search(Lista))
