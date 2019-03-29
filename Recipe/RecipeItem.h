//
// Created by ntallaris on 28/3/2019.
//

#ifndef SOABSTRACTTEST_RECIPEITEM_H
#define SOABSTRACTTEST_RECIPEITEM_H


class RecipeItem {

private:
    std::string functionName;
    std::string functionInputTag;
    std::string resultTag;

public:
    RecipeItem(std::string functionName, std::string functionInputTag, std::string resultTag);
    std::string getFunctionName();
    std::string getFunctionInputTag();
    std::string getResultTag();

};


#endif //SOABSTRACTTEST_RECIPEITEM_H
