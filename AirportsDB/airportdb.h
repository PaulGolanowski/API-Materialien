#ifndef AIRPORTDB_H
#define AIRPORTDB_H

#include <QObject>
#include <QList>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>

#include "airport.h"

class AirportDB : public QObject
{
    Q_OBJECT
public:
    explicit AirportDB(QObject *parent = nullptr);

    bool addAirport(Airport airport);
    QList<Airport> getAirports();

    void loadDb();
    void saveDb();

signals:
    void OnDbUpdated();

private:
    QList<Airport> mAirports;
};

#endif // AIRPORTDB_H
