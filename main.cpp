#include "filmstudio.h"

int main()
{
    Filmstudio* studio = new Filmstudio();
    studio->dialog();

    delete studio;
    return 0;
}
