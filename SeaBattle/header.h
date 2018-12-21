#ifndef HEADER_H
#define HEADER_H

#include <string>
#include <iostream>
#include <sstream>


//типизация
std::string toString(int valInt)
{
    std::ostringstream putStr;
    putStr << valInt;
    return putStr.str();
}
std::string toString(long valInt)
{
    std::ostringstream putStr;
    putStr << valInt;
    return putStr.str();
}
std::string toString(unsigned int valInt)
{
    std::ostringstream putStr;
    putStr << valInt;
    return putStr.str();
}
std::string toString(char* valInt)
{
    std::ostringstream putStr;
    putStr << valInt;
    return putStr.str();
}
std::string toString(float valInt)
{
    std::ostringstream putStr;
    putStr << valInt;
    return putStr.str();
}
std::string toString(double valInt)
{
    std::ostringstream putStr;
    putStr << valInt;
    return putStr.str();
}
int toInt(std::string valInt)
{
    int valueInt = 0;
    valueInt = atoi(valInt.c_str());
    return valueInt;
}
//int toInt(char* valInt)
//{
//	int valueInt = 0;
//	valueInt = atoi(valInt);
//	return valueInt;
//}
//int toInt(float valInt)
//{
//	return (int)valInt;
//}
//int toInt(double valInt)
//{
//	return (int)valInt;
//}
/*float toFloat(std::string valInt)
{
    float valueInt = 0;
    valueInt = atof(valInt.c_str());
    return valueInt;
}
float toFloat(int valInt)
{
    return (float)valInt;
}
double toDouble(std::string valInt)
{
    double valueInt = 0;
    valueInt = atof(valInt.c_str());
    return valueInt;
}
double toDouble(int valInt)
{
    return (double)valInt;
}

//добавляет ноль в начале
void zerroNdQt(std::string & source_)
{
    if (source_.size() == 1)
    {
        std::string s_s = '0' + source_;
        source_ = s_s;
    }
}
std::string zerroNdQt(std::string source_)
{
    if (source_.size() == 1)
    {
        std::string s_s = '0' + source_;
        source_ = s_s;
    }
    return source_;
}
char* zerroNdQt(char * source_)
{
    if (strlen(source_) == 1)
    {
        char *s_s = '0' + source_;
        source_ = s_s;
    }
    return source_;
}



std::string Revers(std::string source_)
{
    std::string tmpStr_;
    for (int i = source_.size() - 1; i > -1; i--)
        tmpStr_ += source_.at(i);
    return tmpStr_;
}

//округляет в меньшую сторону
float Round(float Argument, int Precision)
{
    float div = 1.0;
    if (Precision < 0) while (Precision++) div /= 10.0;
    else while (Precision--) div *= 10.0;
    return floor(Argument * div + 0.5) / div;
}
double Round(double Argument, int Precision)
{
    double div = 1.0;
    if (Precision < 0) while (Precision++) div /= 10.0;
    else while (Precision--) div *= 10.0;
    return floor(Argument * div + 0.5) / div;
}*/
//int Round(int Argument, int Precision)
//{
//	if (toString(Argument).size() < toString(Precision).size())
//	{
//		return Argument;
//	}
//
//	int div = 0;
//	if (Precision < 0) Precision = abs(Precision);
//	std::string konst = toString(Argument);
//
//	std::string tmCh, tmSh;
//
//	for (int i = konst.size() - 1; i > -1; i--)
//	{
//		if (i == konst.size() - 1 - Precision)
//		{
//			for (int j = tmSh.size() - 1; j > -1; j--)
//				tmCh += konst.at(j);
//			break;
//		}
//		tmSh += konst.at(i);
//	}
//	tmCh = Revers(tmCh);
//	tmSh = Revers(tmSh);
//
//	konst = tmCh + "." + tmSh;
//	int cellw = toInt(Round(toFloat(konst), 2));
//	return cellw;
//}

//округляет в меньшую сторону
/*float _Round(float Argument, int Precision)
{
    float div = 1.0;
    if (Precision < 0) while (Precision++) div /= 10.0;
    else while (Precision--) div *= 10.0;
    return ceil(Argument * div + 0.5) / div;
}
double _Round(double Argument, int Precision)
{
    double div = 1.0;
    if (Precision < 0) while (Precision++) div /= 10.0;
    else while (Precision--) div *= 10.0;
    return ceil(Argument * div + 0.5) / div;
}*/
//int _Round(int Argument, int Precision)
//{
//	if (toString(Argument).size() < toString(Precision).size())
//	{
//		return Argument;
//	}
//
//	int div = 0;
//	if (Precision < 0) Precision = abs(Precision);
//	std::string konst = toString(Argument);
//
//	std::string tmCh, tmSh;
//
//	for (int i = konst.size() - 1; i > -1; i--)
//	{
//		if (i == konst.size() - 1 - Precision)
//		{
//			for (int j = tmSh.size() - 1; j > -1; j--)
//				tmCh += konst.at(j);
//			break;
//		}
//		tmSh += konst.at(i);
//	}
//	tmCh = Revers(tmCh);
//
//	tmSh = Revers(tmSh);
//
//	konst = tmCh + "." + tmSh;
//	int cellw = toInt(Round(toFloat(konst), 0));
//	return cellw;
//}
//специальное округление
//int __Round(int Argument, int Precision)
//{
//	if (toString(Argument).size() < toString(Precision).size())
//	{
//		return Argument;
//	}
//	if (toString(Argument).size() < 4)
//	{
//		return Argument;
//	}
//	int div = 0;
//	if (Precision < 0) Precision = abs(Precision);
//	std::string konst = toString(Argument);
//
//	std::string tmCh, tmSh;
//
//	for (int i = konst.size() - 1; i > -1; i--)
//	{
//		if (i == konst.size() - 1 - Precision)
//		{
//			for (int j = tmSh.size() - 1; j > -1; j--)
//				tmCh += konst.at(j);
//			break;
//		}
//		tmSh += konst.at(i);
//	}
//	tmCh = Revers(tmCh);
//	/*	if (tmSh == "00" || tmSh == "0")
//	{
//	tmSh = Revers(tmSh);
//	konst = tmCh + "0";
//	int cellw = toInt(konst);
//	return cellw;
//	}
//	else
//	{*/
//	tmSh = Revers(tmSh);
//	konst = tmCh + "." + tmSh;
//	int cellw = toInt(Round(toFloat(konst), 0));
//	return cellw;
//	//}
//}

#endif // HEADER_H
