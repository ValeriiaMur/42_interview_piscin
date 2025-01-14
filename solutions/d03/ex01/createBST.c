/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createBST.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriiamuradian <valeriiamuradian@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 08:41:40 by valeriiamur       #+#    #+#             */
/*   Updated: 2019/03/26 08:59:34 by valeriiamur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>
#include <stdlib.h>

struct s_node *createBST(int *arr, int n)
{ 
    struct s_node *root = makingBST(arr, 0, n - 1);
    return (root);
}

struct s_node *makingBST(int *arr, int start, int end)
{
    int mid;

    if (start > end) //base case
        return NULL;
    //get the middle->make it a root
    mid = (start + end) / 2;
    struct s_node *root = createNew(mid);
    root->left = makingBST(arr, start, mid -1);
    root->right = makingBST(arr, mid + 1, end);
    return (root);
}

struct s_node *createNew(int data)
{
    struct s_node *new = (struct s_node*)malloc(sizeof(struct s_node));
    new->value = data;
    new->left = NULL;
    new->right = NULL;
    return (new);
}