/*
  This file is part of the kcalcore library.
  SPDX-FileCopyrightText: 2006 Allen Winter <winter@kde.org>

  SPDX-License-Identifier: LGPL-2.0-or-later
*/

#ifndef TESTATTACHMENT_H
#define TESTATTACHMENT_H

#include <QObject>

class AttachmentTest : public QObject
{
    Q_OBJECT
private Q_SLOTS:
    void testValidity();
    void testSerializer_data();
    void testSerializer();
};

#endif
