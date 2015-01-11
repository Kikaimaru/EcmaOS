#pragma once

#include "../../Runtime/syntax/syntaxkind.h"
#include "../../Runtime/syntax/syntaxnode.h"
#include "../../Runtime/parser.h"
#include "../../Runtime/scope.h"
#include "../../Runtime/syntax/syntaxnodevisitor.h"

using namespace r;


class TreeFlattener : SyntaxNodeVisitor {


public:

	Vector<SyntaxKind>* GetList() { return _list; }

#define DEF_VISIT(type)                         \
          void Visit##type(type##Syntax& node);
	AST_NODE_LIST(DEF_VISIT)
#undef DEF_VISIT

private:
	Vector<SyntaxKind>* _list = new Vector<SyntaxKind>();

};




