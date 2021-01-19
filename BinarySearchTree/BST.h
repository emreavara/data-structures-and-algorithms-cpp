#ifndef BST_H
#define BST_H

#include<iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <sstream>  


class NodeTree{ // Binary Search Tree Class with required information implemented as an object
	private:
		
	string student_id;
	string student_name;
	string student_surname;
	int student_grade;
	NodeTree *l_branch;
	NodeTree *r_branch;
	
	public:
	NodeTree() : student_id(),student_name(),student_surname(),student_grade(),l_branch(NULL),r_branch(NULL){}
		
	NodeTree(string s_id,string s_name,string s_surname,int s_grade){
		
		student_id = s_id;
	    student_name = s_name;
	    student_surname = s_surname;
	    student_grade = s_grade;
	    l_branch = NULL;
	    r_branch = NULL;
	}
	
	NodeTree* insert_new_branch(NodeTree *root,string s_id,string s_name,string s_surname,int s_grade){ // Insertion of the new node 
		if(!root){
			return new NodeTree(s_id,s_name,s_surname,s_grade);
		}
		
		if (s_grade > root->student_grade){ // Insertion of the node to the right branch
			root->r_branch = insert_new_branch(root->r_branch,s_id,s_name,s_surname,s_grade);
		}
		else{ // Insertion of the node to the left branch
			root->l_branch = insert_new_branch(root->l_branch,s_id,s_name,s_surname,s_grade);
		}
		return root;
	}
	void Postorder(NodeTree *root) // print BST postorder traversal
	{ 
	    if(!root) 
	    { 
	        return; 
	    } 
	    Postorder(root->l_branch); 
	    Postorder(root->r_branch);
	    cout << root->student_id +" : " + root->student_name + " " + root->student_surname + " - " << root->student_grade << "-->" <<endl; // Printing output
	     
	} 
		
};

#endif // BST_H
