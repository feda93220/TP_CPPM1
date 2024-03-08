#include <string.h>
#include <iostream>

void c_style_swap(void *ptr_a, void *ptr_b, size_t elem_size) {
    void *temp = malloc(elem_size);
    if (temp == NULL) {return;}
    memcpy(temp, ptr_a, elem_size);
    memcpy(ptr_a, ptr_b, elem_size);
    memcpy(ptr_b, temp, elem_size);
    free(temp);
}

void buffer_swap(void *vp1, void *vp2, size_t size) {
    // Ca marche car on sait qu'un char prend 1 byte
    // et qu'on sait qu'on veut réserver 1 * elem_size
    // on pourrait très bien faire int buffer[size / 4]
    // C'est plus un hack qu'autre chose, au final on ne
    // comprend pas vraiment ce que vient faire ce char
    // Autant être explicite et utiliser malloc(sizeof(obj))
    char buffer[size];
    memcpy(buffer, vp1, size);
    memcpy(vp1, vp2, size);
    memcpy(vp2, buffer, size);
}

int linear_search(void *obj_to_find,
                   void *array[],
                   int nb_of_elems_in_array,
                   size_t elem_size,
                   void (*equality_funct)()) {
    // *p = pointeur vers le début de l'array
    // Tant que i < nb elements dans l'array
    //     if (equality_funct(obj_to_find, *p))
    //        return 1
    //     Avancer le pointeur de elem_size
    //     i ++
    return 0;
}

void binary_search() {}
void bubble_sort() {}
void insertion_sort() {}



template <typename T>
void swap(T *ptr_a, T *ptr_b) {
    T temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}

int main() {
    int a = 1, b = 2;
    int *pa = &a; // pointeur a = l'adresse de a
    int *pb = &b; // pointeur b = l'adresse de b
    std::cout << "Before swap - A: " << *pa << " B: " << *pb <<std::endl;

    swap(pa, pb);
    std::cout << "After swap - A: " << *pa << " B: " << *pb <<std::endl;

    c_style_swap(&a, &b, sizeof(a));
    std::cout << "After c style swap - A: " << *pa << " B: " << *pb <<std::endl;

    auto foo = "foo";
    auto bar = "bar";
    std::cout << "foo: " << foo << " et bar: " << bar << "\n";
    buffer_swap(&foo, &bar, sizeof(foo));
    std::cout << "foo: " << foo << " et bar: " << bar << "\n";
}
