#ifndef	__CP949_TO_UTF8_H__
#define	__CP949_TO_UTF8_H__

#ifdef	__cplusplus
extern	"C"	{
#endif

unsigned	cp949_to_utf8_len( const char* _str );
char*		cp949_to_utf8( char* dst_str, const char* src_str );

#ifdef	__cplusplus
}
#endif

#endif
