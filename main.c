#include <stdio.h>

struct student
{
    int ID; //학번
    char name[100]; //이름
    float score; //성적
};

int main(void)
{
    struct student s1 = {1910502, "kim seo yeon", 4.0};

    // 다른 값으로 변경
    s1.ID = 123456;
    s1.name[0] = 'K';
    s1.score = 4.3;

    // 출력
    printf("학번: %d\n이름: %s\n성적: %.1f\n", s1.ID, s1.name, s1.score);
    
    return 0;
}