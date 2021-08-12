//
//	Fileio.h
//
#ifndef FILEIO_H
#define FILEIO_H
#pragma once

bool GetFileData( const char * fileName, unsigned char ** data, unsigned int & size );
bool SaveFileData( const char * fileName, const void * data, unsigned int size );
#endif//FILEIO_H
