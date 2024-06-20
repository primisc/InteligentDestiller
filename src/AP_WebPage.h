
/*! \file WebPage.h */

/*! \brief HTML Page Content                                            */
#include <WString.h>
#ifndef WEBPAGE_H_
#define WEBPAGE_H_

// Header
const String html_init = R"=====(
<!DOCTYPE html>
<html>

<head>

    <title>Distiller Machine</title>
    <meta name='viewport' content='width=device-width, initial-scale=1.0' />
    <link rel=\ "icon\" href=\ "data:,\">
    <meta charset='utf-8'>
    <meta http-equiv="refresh" content="5">
    <style>
        html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}
         .button { background-color: #4C7AAE; border: none; border-radius: 15px; color: white; padding: 10px 10px;
         text-decoration: none; font-size: 20px; margin: 2px; cursor: pointer;}
         .button2 {background-color: #555555; border: none; border-radius: 15px; color: white; padding: 10px 10px;
        	 text-decoration: none; font-size: 20px; margin: 2px; cursor: pointer;}
        body {background-color:#191970; font-size:100%; color:#FFFFFF;}
        #main {display: table; margin: auto;  padding: 30px 30px 30px 30px; }
        #content { border: 2px solid blue; border-radius: 15px; padding: 10px 10px 10px 10px;}
        h2 {text-align:center; margin: 10px 0px 10px 0px;}
        p { text-align:center; margin: 5px 0px 10px 0px; font-size: 120%;}
        #time_P { margin: 10px 0px 15px 0px;}
        blc { display:inline-block; }
        @media,
        {
        	blc  { display: inline; margin-right:10px; text-align:center;}
        	blc2 { display: inline; margin-right:10px; line-height: 10px; text-align:center;}
        	blc3 { display: inline; margin-left:10px; line-height: 10px; text-align:center;}
        }
    </style>

    )=====";

const char html_header[] PROGMEM = R"rawliteral(
                            </head>
                            <body>
                            <div id='main'>
                            <h2>Distiller Machine</h2>
                            <hr>)rawliteral";

/*const char *html_header = "</head>"
                          "<body>"
                          "<img src=ESTGLogo.png>"
                          "<div id='main'>"
                          "<h2>Distiller Machine</h2>"
                          "<hr>";
                          */
// HTML STATUS Colors
const char *html_Lime = "lime";
const char *html_Red = "red";
const char *html_Black = "black";
const char *html_state_idle = "green";
const char *html_state_acquisition = "lime";
const char *html_state_error = "brown";
const char *html_state_buffering = "purple";

// HTML BREAK LINE
const char *html_new_line = "<p> </p>";

// HTML DRAW HORIZONTAL LINE
const char *html_line = "<hr> <br style=line-height:5px>";

// HTML CIRCLE
const char *html_circle_init = "<blc id='content'>";
const char *html_circle_end = "</blc>";

/************************************************************************/
/* FIRST BLOCK                                                          */
/************************************************************************/
// HTML WiFi STATUS

const char *html_wifi_init = " <br style=\"line-height:5px\"> "
                             "<div id='content'>"
                             "<div> "
                             "<blc>"
                             "<blc style=\"width:14px; height: 14px; -webkit-border-radius: 7px;"
                             " -moz-border-radius: 7px; border-radius: 7px;background: ";
const char *html_wifi_end = " ;\"> </blc> "
                            " <blc>WIFI</blc> "
                            " </blc> ";

// HTML IP STATUS
const char *html_IP_init = "<blc>"
                           "<blc style=\"width:14px; height: 14px; -webkit-border-radius: 7px; "
                           "-moz-border-radius: 7px; border-radius: 7px;background: ";
const char *html_IP_end = " ;\"> </blc> "
                          " <blc2>IP</blc2> "
                          "</blc>";

/************************************************************************/
/* TIMER BLOCK                                                         */
/************************************************************************/

// HTML TIME STATUS

// HTML FOOTER IP
const char *html_IP1 = "<blc> IP: ";
const char *html_IP2 = "</blc> ";

// HTML FOOTER TIMER
const char *html_Timer_init = "<blc> TIMER: ";
const char *html_Timer_end = "</blc> ";

// HTML FOOTER INDICATOR ON/OFF
const char *html_indicator_init = "<blc style=\"width:14px; height: 14px; -webkit-border-radius: 7px;"
                                  " -moz-border-radius: 7px; border-radius: 7px;background: ";
const char *html_indicator_end = " ;\"> </blc> ";

/************************************************************************/
/* THIRD BLOCK                                                          */
/************************************************************************/

// Footer
const String html_closing = R"=====(
</div>
</body>
</html>
)=====";

// HTML FOOTER Water min
const char *html_Water_Min_init = "<blc> Water Min ";
const char *html_Water_Min_end = "</blc> ";

// HTML FOOTER Alarm
const char *html_Alarm_init = "<blc> ------------ Alarm ------------ ";
const char *html_Alarm_end = "</blc> ";

#endif /* WEBPAGE_H_ */