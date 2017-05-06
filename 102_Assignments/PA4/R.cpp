int size; //total number of students (Objects)

input >> size;


for(int i = 0; i < size; i++)
{
    input >> temp1;
    object[i].setFirstName(temp1);
    input >> temp2;
    object[i].setLastName(temp2);
    input >> temp3;
    object[i].setGPA(temp3);
    input >> temp4;
    object[i].setClassStanding(temp4);
    input >> temp5;
    object[i].setCurCredit(temp5);
}
