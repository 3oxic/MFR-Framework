//
// Created by ntallaris on 28/3/2019.
//

#include "RecipeItem.h"

RecipeItem::RecipeItem(std::string functionName, std::string functionInputTag, std::string resultTag):functionName(functionName), functionInputTag(functionInputTag), resultTag(resultTag){}

std::string RecipeItem::getFunctionInputTag() {
    return functionInputTag;
}

std::string RecipeItem::getFunctionName() {
    return functionName;
}

std::string RecipeItem::getResultTag() {
    return resultTag;
}