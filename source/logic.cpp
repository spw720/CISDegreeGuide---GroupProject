#include <iostream>
#include <vector>
#include <algorithm>


std::vector<string> required(string trackReq) {
    //Returns all courses that must be taken
    //queries notTaken table, checks if course is part of core or track
    
    std::vector<string> req;

    QSqlQuery qry1;
    qry.prepare("SELECT FROM notTaken WHERE (:trackReq) = 1 OR core = 1");
    qry.bindValue(":trackReq", trackReq);
    if(qry.exec()) {
        while(qry.next()) {
            req.push_back(qry.values(1).toString());
        }
    }

    return req;
}
