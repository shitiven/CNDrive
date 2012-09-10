//
//  AliOSSUtil.m
//  CNDrive
//
//  Created by shitiven on 12-9-8.
//  Copyright (c) 2012年 shitiven. All rights reserved.
//

#import "AliOSSUtil.h"
#import <CommonCrypto/CommonDigest.h>

@implementation AliOSSUtil

+(NSString *)urlEncode:(NSString *)input
{
    NSString *encoded = (__bridge NSString *)CFURLCreateStringByAddingPercentEscapes(NULL, (CFStringRef)input, NULL, (CFStringRef)@"!*'\"();:@&=+$,/?%#[]% ", kCFStringEncodingUTF8);
    
    return encoded;
}

+(NSString *)getGMT{
    NSString        *dateString;
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setLocale:[[NSLocale alloc] initWithLocaleIdentifier:@"en_US"]];
    [formatter setDateFormat:@"EEE, dd MMM yyyy HH:mm:ss"];
    [formatter setTimeZone:[NSTimeZone timeZoneForSecondsFromGMT:0]];
    
    dateString = [formatter stringFromDate:[NSDate date]];
    
    return [NSString stringWithFormat:@"%@ GMT",dateString];
}

+(NSString *)MIMETypeForExtension:(NSString *)extension
{
    static NSDictionary *lookupTable = nil;
    
    if (lookupTable == nil) {
        lookupTable = [[NSDictionary alloc] initWithObjectsAndKeys:
                       @"application/postscript", @"ai",
                       @"audio/x-aiff", @"aif",
                       @"audio/x-aiff", @"aifc",
                       @"audio/x-aiff", @"aiff",
                       @"text/plain", @"asc",
                       @"audio/basic", @"au",
                       @"video/x-msvideo", @"avi",
                       @"application/x-bcpio", @"bcpio",
                       @"application/octet-stream", @"bin",
                       @"text/plain", @"c",
                       @"text/plain", @"cc",
                       @"application/clariscad", @"ccad",
                       @"application/x-netcdf", @"cdf",
                       @"application/octet-stream", @"class",
                       @"application/x-cpio", @"cpio",
                       @"text/plain", @"cpp",
                       @"application/mac-compactpro", @"cpt",
                       @"text/plain", @"cs",
                       @"application/x-csh", @"csh",
                       @"text/css", @"css",
                       @"application/x-director", @"dcr",
                       @"application/x-director", @"dir",
                       @"application/octet-stream", @"dms",
                       @"application/msword", @"doc",
                       @"application/msword", @"docx",
                       @"application/msword", @"dot",
                       @"application/drafting", @"drw",
                       @"application/x-dvi", @"dvi",
                       @"application/acad", @"dwg",
                       @"application/dxf", @"dxf",
                       @"application/x-director", @"dxr",
                       @"application/postscript", @"eps",
                       @"text/x-setext", @"etx",
                       @"application/octet-stream", @"exe",
                       @"application/andrew-inset", @"ez",
                       @"text/plain", @"f",
                       @"text/plain", @"f90",
                       @"video/x-fli", @"fli",
                       @"image/gif", @"gif",
                       @"application/x-gtar", @"gtar",
                       @"application/x-gzip", @"gz",
                       @"text/plain", @"h",
                       @"application/x-hdf", @"hdf",
                       @"text/plain", @"hh",
                       @"application/mac-binhex40", @"hqx",
                       @"text/html", @"htm",
                       @"text/html", @"html",
                       @"x-conference/x-cooltalk", @"ice",
                       @"image/ief", @"ief",
                       @"model/iges", @"iges",
                       @"model/iges", @"igs",
                       @"application/x-ipscript", @"ips",
                       @"application/x-ipix", @"ipx",
                       @"image/jpeg", @"jpe",
                       @"image/jpeg", @"jpeg",
                       @"image/jpeg", @"jpg",
                       @"application/x-javascript", @"js",
                       @"audio/midi", @"kar",
                       @"application/x-latex", @"latex",
                       @"application/octet-stream", @"lha",
                       @"application/x-lisp", @"lsp",
                       @"application/octet-stream", @"lzh",
                       @"text/plain", @"m",
                       @"application/x-troff-man", @"man",
                       @"application/x-troff-me", @"me",
                       @"model/mesh", @"mesh",
                       @"audio/midi", @"mid",
                       @"audio/midi", @"midi",
                       @"www/mime", @"mime",
                       @"video/quicktime", @"mov",
                       @"video/x-sgi-movie", @"movie",
                       @"audio/mpeg", @"mp2",
                       @"audio/mpeg", @"mp3",
                       @"video/mpeg", @"mpe",
                       @"video/mpeg", @"mpeg",
                       @"video/mpeg", @"mpg",
                       @"audio/mpeg", @"mpga",
                       @"application/x-troff-ms", @"ms",
                       @"application/x-ole-storage", @"msi",
                       @"model/mesh", @"msh",
                       @"application/x-netcdf", @"nc",
                       @"application/oda", @"oda",
                       @"image/x-portable-bitmap", @"pbm",
                       @"chemical/x-pdb", @"pdb",
                       @"application/pdf", @"pdf",
                       @"image/x-portable-graymap", @"pgm",
                       @"application/x-chess-pgn", @"pgn",
                       @"image/png", @"png",
                       @"image/x-portable-anymap", @"pnm",
                       @"application/mspowerpoint", @"pot",
                       @"image/x-portable-pixmap", @"ppm",
                       @"application/mspowerpoint", @"pps",
                       @"application/mspowerpoint", @"ppt",
                       @"application/mspowerpoint", @"ppz",
                       @"application/x-freelance", @"pre",
                       @"application/pro_eng", @"prt",
                       @"application/postscript", @"ps",
                       @"video/quicktime", @"qt",
                       @"audio/x-realaudio", @"ra",
                       @"audio/x-pn-realaudio", @"ram",
                       @"image/cmu-raster", @"ras",
                       @"image/x-rgb", @"rgb",
                       @"audio/x-pn-realaudio", @"rm",
                       @"application/x-troff", @"roff",
                       @"audio/x-pn-realaudio-plugin", @"rpm",
                       @"text/rtf", @"rtf",
                       @"text/richtext", @"rtx",
                       @"application/x-lotusscreencam", @"scm",
                       @"application/set", @"set",
                       @"text/sgml", @"sgm",
                       @"text/sgml", @"sgml",
                       @"application/x-sh", @"sh",
                       @"application/x-shar", @"shar",
                       @"model/mesh", @"silo",
                       @"application/x-stuffit", @"sit",
                       @"application/x-koan", @"skd",
                       @"application/x-koan", @"skm",
                       @"application/x-koan", @"skp",
                       @"application/x-koan", @"skt",
                       @"application/smil", @"smi",
                       @"application/smil", @"smil",
                       @"audio/basic", @"snd",
                       @"application/solids", @"sol",
                       @"application/x-futuresplash", @"spl",
                       @"application/x-wais-source", @"src",
                       @"application/STEP", @"step",
                       @"application/SLA", @"stl",
                       @"application/STEP", @"stp",
                       @"application/x-sv4cpio", @"sv4cpio",
                       @"application/x-sv4crc", @"sv4crc",
                       @"application/x-shockwave-flash", @"swf",
                       @"application/x-troff", @"t",
                       @"application/x-tar", @"tar",
                       @"application/x-tcl", @"tcl",
                       @"application/x-tex", @"tex",
                       @"image/tiff", @"tif",
                       @"image/tiff", @"tiff",
                       @"application/x-troff", @"tr",
                       @"audio/TSP-audio", @"tsi",
                       @"application/dsptype", @"tsp",
                       @"text/tab-separated-values", @"tsv",
                       @"text/plain", @"txt",
                       @"application/i-deas", @"unv",
                       @"application/x-ustar", @"ustar",
                       @"application/x-cdlink", @"vcd",
                       @"application/vda", @"vda",
                       @"model/vrml", @"vrml",
                       @"audio/x-wav", @"wav",
                       @"model/vrml", @"wrl",
                       @"image/x-xbitmap", @"xbm",
                       @"application/vnd.ms-excel", @"xlc",
                       @"application/vnd.ms-excel", @"xll",
                       @"application/vnd.ms-excel", @"xlm",
                       @"application/vnd.ms-excel", @"xls",
                       @"application/vnd.ms-excel", @"xlw",
                       @"text/xml", @"xml",
                       @"image/x-xpixmap", @"xpm",
                       @"image/x-xwindowdump", @"xwd",
                       @"chemical/x-pdb", @"xyz",
                       @"application/zip", @"zip",
                       @"video/x-m4v", @"m4v",
                       @"video/webm", @"webm",
                       @"video/ogv", @"ogv",
                       @"audio/mp4a-latm", @"m4a",
                       nil];
    }
    NSString *mimetype = (NSString *)[lookupTable objectForKey:extension];
    return mimetype == nil ? @"application/octet-stream" : mimetype;
}

@end
