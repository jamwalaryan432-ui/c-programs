#include <stdio.h>


int main()
{
    const char str[] = "w\nl\nc\no\nm\ne\nt\no\nc\nh\ni\nt\nk\na\nr\na\n\nu\nn\ni\nv\ne\nr\ns\ni\nt\ny";
    printf("%s", str);
    return 0;
}


#define bool int
#define false 0
#define true 1

int main()
{
    bool a = true;
    bool b = false;
}
