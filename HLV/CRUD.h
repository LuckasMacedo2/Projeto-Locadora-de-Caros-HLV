#ifndef CRUD_H
#define CRUD_H
#include <QString>
#include <list>
#include <fstream>
#include <QString>
#include <queue>
#include <QStringList>
#include <stack>
#include <vector>
#include "GerarID.h"
template <class tipo>
class CRUD
{
public:
    virtual void incluir (tipo &) const = 0;
    virtual std::list<tipo> * listar () const = 0;
    virtual void alterar (tipo & ) = 0;
    virtual void excluir (QString &) const = 0;
};

#endif // CRUD_H
