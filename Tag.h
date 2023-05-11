

#ifndef _TAG_H
#define _TAG_H

class Tag {
    private: 
        int id;
        string name;
        string remarks;
    public: 
        void setID(int ID);
        int getID();
        void setName(string n);
        string getName();
        void setRemarks(string r);
        string getRemarks();  
};

#endif //_TAG_H
