#include<iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <sstream>  
#include <vector>
#include "BST.h"
using namespace std;

vector<string> split(string str, char comma) { // function to split data with comma
  vector<string> internal;
  stringstream ss(str);
  string tok;
 
  while(getline(ss, tok, comma)) {
    internal.push_back(tok);
  }
 
  return internal;
}


	

int main(){
	string student_info[150][4];
	
	
	ifstream txt_file ("text.txt");
	string line;
	int number_of_students = 0;
	if(txt_file.is_open()){
		
		while (!txt_file.eof()) {
			getline(txt_file,line); // Reading data from a txt file line by line
			
			vector<string> s_data = split(line, ','); 
			
			for(int i = 0; i < (int)s_data.size(); i++){
					student_info[number_of_students][i] = s_data[i];
					
				
			}
    		number_of_students++;
		}
	}
	txt_file.close();
    
	
	
	NodeTree BST,*root = NULL;
	root = BST.insert_new_branch(root,student_info[0][0],student_info[0][1],student_info[0][2],stoi(student_info[0][3]));  // Creation of the root branch
	
    string inserted_data[150][4];
    int similarity_check = 0; // Check flag to find same students
    int num_add_students = 0; // Number of added students to the BST
    
	for(int i = 1; i <number_of_students;i++){ // Insertion of all student informations to the tree except first student who is root
	    for(int j = 0; j <num_add_students+1;j++){
	        if(inserted_data[j][0] == student_info[i][0] && inserted_data[j][1] == student_info[i][1] && inserted_data[j][2] == student_info[i][2]){

	            cout<< "The insert item is already in the list, duplicates are not allowed." << student_info[i][0] +" "+student_info[i][1] +" "+student_info[i][2] +" "+student_info[i][3] << endl ;
	            similarity_check =1;
	            
	        }
	        
	    }
	if (similarity_check==0){
			BST.insert_new_branch(root,student_info[i][0],student_info[i][1],student_info[i][2],std::stoi(student_info[i][3])); // Insetion
			
			inserted_data[num_add_students][0] = student_info[i][0]; // Saving added students
			inserted_data[num_add_students][1] = student_info[i][1];
			inserted_data[num_add_students][2] = student_info[i][2];
			inserted_data[num_add_students][3] = student_info[i][3];
			similarity_check =0;
			num_add_students++;
	}
	similarity_check =0;
}
    
	BST.Postorder(root);
	return 0;
}
