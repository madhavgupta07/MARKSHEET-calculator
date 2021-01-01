#include<stdio.h>
int main(){
    float eng, phy, che, maths, p_ed;
    float total=1, percent;
    char name[30], div[30];
    printf("----------------------------------------MARKSHEET-----------------------------------------\n\n");
    printf("-----------------------------------------SUBJECTS-----------------------------------------\n");
    printf("1. English       2. Physics       3. Maths       4. Chemistry       5. Physical Education\n\n\n");
    printf("\t\t\t\tEnter Student's first name: ");
    scanf("%s",name);
    printf("\t\t\t\tEnter English marks: ");
    scanf("%f",&eng);
    printf("\t\t\t\tEnter Physics marks: ");
    scanf("%f",&phy);
    printf("\t\t\t\tEnter Maths marks: ");
    scanf("%f",&maths);
    printf("\t\t\t\tEnter Chemistry marks: ");
    scanf("%f",&che);
    printf("\t\t\t\tEnter Physical Education marks: ");
    scanf("%f",&p_ed);
    total=(eng+phy+che+maths+p_ed);
    printf("\n\n\n\tTotal marks of %s is: %f",name, total);
    percent=total/5;
    printf("\n\tTotal percentage of %s is: %f",name, percent);
    if (total>=300){
        printf("\n\t%s is passed with 1st div.\n", name);
    }else if(total<300&&total>=200){
        printf("\n\t%s is passed with 2nd div.\n", name);
    }
    else{
        printf("\n\t%s is passed with 3rd div.\n", name);
    }
    return 0;
}
