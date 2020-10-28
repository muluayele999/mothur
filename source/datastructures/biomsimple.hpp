//
//  biomsimple.hpp
//  Mothur
//
//  Created by Sarah Westcott on 10/26/20.
//  Copyright © 2020 Schloss Lab. All rights reserved.
//

#ifndef biomsimple_hpp
#define biomsimple_hpp

//biom version 0.9.1

#include "biom.hpp"

class BiomSimple : public Biom {
    
public:
    
    BiomSimple();
    BiomSimple(string, string, string, int, bool); // filename, basis, label, printlevel, relabund
    ~BiomSimple() {  }
    
    void read(string);
    
    
private:
   
    //examples: tableType = "OTU table", matrixFormat = "sparse" or "dense", matrixElementType = "int" or "float"
    string matrixFormat, matrixElementType, tableType;
    
    string getTag(string&);
    void getDims(string, int&, int&);

    SharedRAbundVectors* extractOTUData(string, vector<string>&, int);
    vector< vector<string> > extractTaxonomyData(string, int&, bool&);
    vector<string> getNamesAndTaxonomies(string);
    string getName(string);
    string getTaxonomy(string, string);
};


#endif /* biomsimple_hpp */
