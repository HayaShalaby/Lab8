

#ifndef _LOCATION_H
#define _LOCATION_H

class Location {
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

#endif //_LOCATION_H
