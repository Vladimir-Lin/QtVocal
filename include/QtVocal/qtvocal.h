/****************************************************************************
 *                                                                          *
 * Copyright (C) 2015 Neutrino International Inc.                           *
 *                                                                          *
 * Author : Brian Lin <lin.foxman@gmail.com>, Skype: wolfram_lin            *
 *                                                                          *
 ****************************************************************************/

#ifndef QT_VOCAL_H
#define QT_VOCAL_H

#include <QtCore>
#include <QtNetwork>
#include <QtSql>
#include <QtScript>
#include <Essentials>
#include <Mathematics>
#include <QtPhonemes>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_QTVOCAL_LIB)
#      define Q_VOCAL_EXPORT Q_DECL_EXPORT
#    else
#      define Q_VOCAL_EXPORT Q_DECL_IMPORT
#    endif
#else
#    define Q_VOCAL_EXPORT
#endif


namespace N
{

class Q_VOCAL_EXPORT SpeakChannel   ;
class Q_VOCAL_EXPORT SpeakProcessor ;
class Q_VOCAL_EXPORT Hearing        ;

class Q_VOCAL_EXPORT SpeakChannel
{
  public:

    explicit SpeakChannel (void) ;
    virtual ~SpeakChannel (void) ;

  protected:

  private:

};

class Q_VOCAL_EXPORT SpeakProcessor
{
  public:

    explicit SpeakProcessor (void) ;
    virtual ~SpeakProcessor (void) ;

    void     setDevice      (QString device) ;
    void     setLanguage    (int languageId) ;
    void     Start          (void) ;
    void     Stop           (void) ;
    void     Clear          (void) ;
    void     Append         (QString message) ;

  protected:

  private:

};

/*****************************************************************************\
 *                                                                           *
 *                               Sound recognizer                            *
 *                                                                           *
\*****************************************************************************/

class Q_VOCAL_EXPORT Hearing
{
  public:

    explicit Hearing (void) ;
    virtual ~Hearing (void) ;

  protected:

  private:

};

}

QT_END_NAMESPACE

#endif
