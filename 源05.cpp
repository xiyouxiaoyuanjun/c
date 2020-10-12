//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct node {
//    int data;
//    struct node* next;
//}Node;
//Node* removeNthFromEnd(Node* head, int n)
//{
//    Node* tmp = head;
//    int count = 0;
//    int cir = 0;
//    while (tmp->next != NULL)
//    {
//        count++; tmp = tmp->next;
//    }
//    count++;
//    if (n == count) return head->next;
//    if (n == 1)
//    {
//        tmp = head;
//        while (tmp->next->next != NULL)
//        {
//            tmp = tmp->next;
//        }
//        tmp->next = NULL;
//        return head;
//    }
//    tmp = head;
//    count = count - n;
//    while (cir < count - 1)
//    {
//        tmp = tmp->next;
//        cir++;
//    }
//    tmp->next->data = tmp->next->next->data;
//    tmp->next = tmp->next->next;
//    return head;
//}
//Node* init()
//{
//    Node* head = (Node*)malloc(sizeof(Node));
//    head->data = 0;
//    head->next = NULL;
//    Node* p;
//    Node* now = head;
//    for (int i = 1; i < 10; i++)
//    {
//        p = (Node*)malloc(sizeof(Node));
//        p->data = i;
//        p->next = NULL;
//        now->next = p;
//        now = p;
//    }
//    return head;
//}
//int main(void)
//{
//    Node* head = init();
//    Node* now = head;
//    int n;
//    printf("共10个,输入n:");
//    scanf("%d", &n);
//    printf("删除前:");
//    while (now != NULL)
//    {
//        printf("%d", now->data);
//        now = now->next;
//    }
//    printf("\n");
//    removeNthFromEnd(head, n);
//    now = head;
//    printf("删除后:");
//    while (now != NULL)
//    {
//        printf("%d", now->data);
//        now = now->next;
//    }
//}
