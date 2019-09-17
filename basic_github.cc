


45. How to push any code or matrix or any document form your local machine to github

1. mkdir git_hub     I made a directory  git_hub could have any name you want(git_hub is just name).

2. cd git_hub

3. git init             this will initialize the directory for github

4. copy the link from the online repository and use the following way
    
5  git clone + link    that you copied from the git hub repository(COdes_NNL is git hub repository, do not use the positive sign)

6. cd Codes_NNL

7. copy the file or matrix or your written document to that Codes_NNL directory

8. git status ( will see the copied file or matrix in the red color)

9. git add file_name( could be code or a matrix or anything for example git add test.cc)

10. git status ( the added file must be in the green color)

11.  git commit -m "RHRS Z-vertex optimized matrix for NNL_2019, 3rd order matrix" 

Note: the the statement in the “ ”  is the commit message. You should write in your own way.
12. git push origin master

Will ask your user name and password and you must give it to github

How to remove a file from github.com
1. do upto step #6.
git rm bishnu.txt where bishnu.txt is the file to be removed.
