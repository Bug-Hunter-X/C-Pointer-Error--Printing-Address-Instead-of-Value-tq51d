int main() {
    int x = 10;
    int *ptr = &x; 
    *ptr = 20; // modify the value of x through the pointer
    printf("%d", *ptr); //Corrected: printing the dereferenced pointer value
    return 0;
}