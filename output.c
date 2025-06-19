What is the output of below pseudocode?

#include <stdio.h>
#include <string.h>
#define VIEVEN
Int main() {
If defined(VIVEN)
Printf(“Hello”);
#else
Printf(“How”);
#endif
Printf(“Are You”);

Explanation : Here else part is skipped because if is defined VIVEN
output : HelloAre You


What is the output of the below seudocode?

#include <stdio.h>
#include <string.h>
int main() {
int nu = 10;
int val;
memcpy(&val, nu, sizeof(int));
printf("val = %d\n", val);
return 0; 
}

Explanation : It gets error because in memcpy &nu is must
Output : Error