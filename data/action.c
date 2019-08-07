Action()
{

	web_url("kalimanjaro.hpeswlab.net", 
		"URL=http://kalimanjaro.hpeswlab.net/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Images/logo_flipped.gif", ENDITEM, 
		LAST);

	web_image("logo.gif", 
		"Src=Images/logo.gif", 
		"Snapshot=t2.inf", 
		EXTRARES, 
		"Url=/NewFlights/images/nav/nav_home_a.gif", "Referer=http://kalimanjaro.hpeswlab.net/NewFlights/nav.pl", ENDITEM, 
		"Url=/NewFlights/images/nav/nav_hotels_a.gif", "Referer=http://kalimanjaro.hpeswlab.net/NewFlights/nav.pl", ENDITEM, 
		"Url=/NewFlights/images/nav/nav_destinations_a.gif", "Referer=http://kalimanjaro.hpeswlab.net/NewFlights/nav.pl", ENDITEM, 
		"Url=/NewFlights/images/nav/nav_vacations_a.gif", "Referer=http://kalimanjaro.hpeswlab.net/NewFlights/nav.pl", ENDITEM, 
		"Url=/NewFlights/images/nav/nav_flights_a.gif", "Referer=http://kalimanjaro.hpeswlab.net/NewFlights/nav.pl", ENDITEM, 
		"Url=/NewFlights/images/nav/nav_car_a.gif", "Referer=http://kalimanjaro.hpeswlab.net/NewFlights/nav.pl", ENDITEM, 
		"Url=/NewFlights/images/nav/nav_cruises_a.gif", "Referer=http://kalimanjaro.hpeswlab.net/NewFlights/nav.pl", ENDITEM, 
		"Url=/NewFlights/images/toolbar/tool_signon_a.gif", "Referer=http://kalimanjaro.hpeswlab.net/NewFlights/toolbar.html", ENDITEM, 
		"Url=/NewFlights/images/toolbar/tool_support_a.gif", "Referer=http://kalimanjaro.hpeswlab.net/NewFlights/toolbar.html", ENDITEM, 
		"Url=/NewFlights/images/toolbar/tool_contact_a.gif", "Referer=http://kalimanjaro.hpeswlab.net/NewFlights/toolbar.html", ENDITEM, 
		"Url=/NewFlights/images/toolbar/tool_register_a.gif", "Referer=http://kalimanjaro.hpeswlab.net/NewFlights/toolbar.html", ENDITEM, 
		LAST);

	lr_think_time(10);

	web_submit_form("login.pl", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=0", ENDITEM, 
		"Name=login.y", "Value=0", ENDITEM, 
		EXTRARES, 
		"Url=images/toolbar/tool_profile_a.gif", "Referer=http://kalimanjaro.hpeswlab.net/NewFlights/toolbar_member.html", ENDITEM, 
		"Url=images/toolbar/tool_intinerary_a.gif", "Referer=http://kalimanjaro.hpeswlab.net/NewFlights/toolbar_member.html", ENDITEM, 
		"Url=images/toolbar/tool_signoff_a.gif", "Referer=http://kalimanjaro.hpeswlab.net/NewFlights/toolbar_member.html", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=type", "Value=roundtrip", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=depart", "Value=Acapulco", ENDITEM, 
		"Name=depart_mon", "Value=Aug", ENDITEM, 
		"Name=depart_day", "Value=7", ENDITEM, 
		"Name=arrive", "Value=Zurich", ENDITEM, 
		"Name=return_mon", "Value=Aug", ENDITEM, 
		"Name=return_day", "Value=8", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=airline", "Value=No Preference", ENDITEM, 
		"Name=findFlights.x", "Value=65", ENDITEM, 
		"Name=findFlights.y", "Value=13", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t5.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=button0", ENDITEM, 
		"Name=returnFlight", "Value=button0", ENDITEM, 
		"Name=reserveFlights.x", "Value=65", ENDITEM, 
		"Name=reserveFlights.y", "Value=10", ENDITEM, 
		LAST);

	return 0;
}