/* soapLicWebServiceSoapProxy.h
   Generated by gSOAP 2.8.22 from LicWebService.h

Copyright(C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapLicWebServiceSoapProxy_H
#define soapLicWebServiceSoapProxy_H
#include "soapH.h"

class SOAP_CMAC LicWebServiceSoapProxy : public soap
{ public:
	/// Endpoint URL of service 'LicWebServiceSoapProxy' (change as needed)
	const char *soap_endpoint;
	/// Variables globally declared in LicWebService.h (non-static)
	/// Constructor
	LicWebServiceSoapProxy();
	/// Construct from another engine state
	LicWebServiceSoapProxy(const struct soap&);
	/// Constructor with endpoint URL
	LicWebServiceSoapProxy(const char *url);
	/// Constructor with engine input+output mode control
	LicWebServiceSoapProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	LicWebServiceSoapProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	LicWebServiceSoapProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~LicWebServiceSoapProxy();
	/// Initializer used by constructors
	virtual	void LicWebServiceSoapProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif

	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'Login' (returns error code or SOAP_OK)
	virtual	int Login(_ns1__Login *ns1__Login, _ns1__LoginResponse &ns1__LoginResponse) { return this->Login(NULL, NULL, ns1__Login, ns1__LoginResponse); }
	virtual	int Login(const char *endpoint, const char *soap_action, _ns1__Login *ns1__Login, _ns1__LoginResponse &ns1__LoginResponse);

	/// Web service operation 'IsValidToken' (returns error code or SOAP_OK)
	virtual	int IsValidToken(_ns1__IsValidToken *ns1__IsValidToken, _ns1__IsValidTokenResponse &ns1__IsValidTokenResponse) { return this->IsValidToken(NULL, NULL, ns1__IsValidToken, ns1__IsValidTokenResponse); }
	virtual	int IsValidToken(const char *endpoint, const char *soap_action, _ns1__IsValidToken *ns1__IsValidToken, _ns1__IsValidTokenResponse &ns1__IsValidTokenResponse);

	/// Web service operation 'Logout' (returns error code or SOAP_OK)
	virtual	int Logout(_ns1__Logout *ns1__Logout, _ns1__LogoutResponse &ns1__LogoutResponse) { return this->Logout(NULL, NULL, ns1__Logout, ns1__LogoutResponse); }
	virtual	int Logout(const char *endpoint, const char *soap_action, _ns1__Logout *ns1__Logout, _ns1__LogoutResponse &ns1__LogoutResponse);

	/// Web service operation 'Reset' (returns error code or SOAP_OK)
	virtual	int Reset(_ns1__Reset *ns1__Reset, _ns1__ResetResponse &ns1__ResetResponse) { return this->Reset(NULL, NULL, ns1__Reset, ns1__ResetResponse); }
	virtual	int Reset(const char *endpoint, const char *soap_action, _ns1__Reset *ns1__Reset, _ns1__ResetResponse &ns1__ResetResponse);

	/// Web service operation 'Login' (returns error code or SOAP_OK)
	virtual	int Login_(_ns1__Login *ns1__Login, _ns1__LoginResponse &ns1__LoginResponse) { return this->Login_(NULL, NULL, ns1__Login, ns1__LoginResponse); }
	virtual	int Login_(const char *endpoint, const char *soap_action, _ns1__Login *ns1__Login, _ns1__LoginResponse &ns1__LoginResponse);

	/// Web service operation 'IsValidToken' (returns error code or SOAP_OK)
	virtual	int IsValidToken_(_ns1__IsValidToken *ns1__IsValidToken, _ns1__IsValidTokenResponse &ns1__IsValidTokenResponse) { return this->IsValidToken_(NULL, NULL, ns1__IsValidToken, ns1__IsValidTokenResponse); }
	virtual	int IsValidToken_(const char *endpoint, const char *soap_action, _ns1__IsValidToken *ns1__IsValidToken, _ns1__IsValidTokenResponse &ns1__IsValidTokenResponse);

	/// Web service operation 'Logout' (returns error code or SOAP_OK)
	virtual	int Logout_(_ns1__Logout *ns1__Logout, _ns1__LogoutResponse &ns1__LogoutResponse) { return this->Logout_(NULL, NULL, ns1__Logout, ns1__LogoutResponse); }
	virtual	int Logout_(const char *endpoint, const char *soap_action, _ns1__Logout *ns1__Logout, _ns1__LogoutResponse &ns1__LogoutResponse);

	/// Web service operation 'Reset' (returns error code or SOAP_OK)
	virtual	int Reset_(_ns1__Reset *ns1__Reset, _ns1__ResetResponse &ns1__ResetResponse) { return this->Reset_(NULL, NULL, ns1__Reset, ns1__ResetResponse); }
	virtual	int Reset_(const char *endpoint, const char *soap_action, _ns1__Reset *ns1__Reset, _ns1__ResetResponse &ns1__ResetResponse);
};
#endif