#include <iostream>
int main(int argc,char **argv)
{
    int i;
    int j;
    j = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    while (j < argc)
    {
        i = 0;
        while (argv[j][i] != '\0')
        {
          std::cout<< (char)std::toupper(argv[j][i]);
          i++;
        }
        j++;
        std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
}
