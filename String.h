//
// Created by jjasan2 on 11/12/2022.
//

#ifndef PROJECT3_STRING_H
#define PROJECT3_STRING_H


class String {
    int size_;
    char* chars_;
public:
    String();
    String(char* chars);
    String(String &string);

    ~String();

public:
    // Getters & setters
    int getSize() const;
    char *getChars() const;
    void setChars(char *chars);

    bool operator==(String& newString);
};


#endif //PROJECT3_STRING_H
