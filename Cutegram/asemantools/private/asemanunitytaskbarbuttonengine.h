#ifndef ASEMANUNITYTASKBARBUTTONENGINE_H
#define ASEMANUNITYTASKBARBUTTONENGINE_H

#include "asemanabstracttaskbarbuttonengine.h"

class AsemanUnityTaskbarButtonEngine : public AsemanAbstractTaskbarButtonEngine
{
public:
    AsemanUnityTaskbarButtonEngine();

    void updateBadgeNumber(int number);
    void updateProgress(qreal progress);
    void updateLauncher(const QString &launcher);

private:
    void update(const QString &launcher, qint64 badgeNumber, qreal progress);

private:
    int _badge_number;
    qreal _progress;
    QString _launcher;
};

#endif // ASEMANUNITYTASKBARBUTTONENGINE_H
