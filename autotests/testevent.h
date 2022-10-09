/*
  This file is part of the kcalcore library.

  SPDX-FileCopyrightText: 2006-2008 Allen Winter <winter@kde.org>

  SPDX-License-Identifier: LGPL-2.0-or-later
*/

#ifndef TESTEVENT_H
#define TESTEVENT_H

#include <QObject>

class EventTest : public QObject
{
    Q_OBJECT
private Q_SLOTS:
    void testSetRoles_data();
    void testSetRoles();
    void testValidity();
    void testCompare();
    void testClone();
    void testCopy();
    void testCopyIncidence();
    void testAssign();
    void testSerializer_data();
    void testSerializer();
    void testDurationDtEnd();
    void testDtEndChange();
    void testIsMultiDay_data();
    void testIsMultiDay();
};

#endif