#ifndef EXECINFO_H
#define EXECINFO_H

class ExecInfo {
public:
    ExecInfo();
    virtual ~ExecInfo();
    void argHandling(int argc, char**argv);
    const char * inputFile;
    const char * queryFile;
    const char * outputFile;
    int k;
    int l;
    bool stats;
    int func;
    int hash;
    bool inputFileFlag;
    bool queryFileFlag;
    bool outputFileFlag;
    bool kFlag;
    bool lFlag;
    bool statsFlag;
    bool functionFlag;
    bool hashFlag;
private:

};


#endif /* EXECINFO_H */

