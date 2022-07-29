int main(int argc, char const *argv[])
{
    // Pointer to character
    char* ptr_to_char = new char;

    // Array of 10 integers
    int arr_int[] = {1,2,3,4,5,6,7,8,9,10};

    // Pointer to an array of 10 integers
    int* ptr_arr_int = arr_int;

    // Pointer to an array of character strings
    char* ptr_arr_char = new char[1];

    // Pointer to pointer to a character
    char** ptr_ptr_char = &ptr_to_char;

    // Integer constant
    const int const_int = 1;

    // Pointer to an integer constant
    const int* ptr_const_int = &const_int;

    // Constant pointer to an integer
    int const* const_ptr_int = &const_int;


    return 0;
}
