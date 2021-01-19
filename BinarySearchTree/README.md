# Data Structures -  Binary Search Tree (BST) 

In this project Binary Source Tree (BST) is implemented in C++ language. The purpose of the implementation is to read a text file that contains information about the students as shown below into a BST of Student objects. The comparison of student objects is done according to their grades, the last column of the file. There may be some duplicate grades so that the BST ignores them as shown in sample run. Then, print the
BST postorder traversal.


__Example Text File:__

```
...
128118145,Mervan,Behcet,25
153622669,Bugra,Ayvaz,87
131035784,Ozgur,Cihan,65
158142531,Mengu,Kartal,74
137121004,Guncicek,Elmas,62,
120254705,Aysoy,Olmez,24
154243711,Gullu,Enveri,98
125329265,Havva,Mumcu,57
154865652,Nisan,Tahir,39
151594960,Bican,Akbay,42
...
```

__Sample Run:__

```
...
The insert item is already in the list, duplicates are not
allowed.134514324: Sybil Griffith - 85 -->
The insert item is already in the list, duplicates are not
allowed.112367283: Melissa Mayer - 21 -->
The insert item is already in the list, duplicates are not
allowed.115868255: Reva Castro - 74 --> 
The insert item is already in the list, duplicates are not
allowed.142119778: Clayton Barrera - 40 -->
The insert item is already in the list, duplicates are not
allowed.140452464: Drew Webb - 48 -->
143324936: Brooke Clements - 1 -->
 117724082: Scotty Moore - 9 -->
 147588974: Junior Hawkins - 10 -->
 121496653: Peter Ponce - 8 -->
 141220679: Aida Mann - 4 -->
 114342371: Cortez Santana - 3 -->
 143218417: Kate Barr - 14 -->
 139552560: Jan Le - 13 -->
 158205239: Greta Rangel - 15 -->
 148172475: Deana Peterson - 18 →
...
```