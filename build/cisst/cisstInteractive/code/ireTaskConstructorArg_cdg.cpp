// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstInteractive/code/../ireTaskConstructorArg.cdg

#include <cisstInteractive/ireTaskConstructorArg.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */


/* source line: 26 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(ireTaskConstructorArgProxy);

ireTaskConstructorArg::ireTaskConstructorArg(void):
    mtsGenericObject()
    , Name()
    , Shell(IRE_WXPYTHON)
    , Startup("")
{}

ireTaskConstructorArg::ireTaskConstructorArg(const ireTaskConstructorArg & other):
    mtsGenericObject(other)
    , Name(other.Name)
    , Shell(other.Shell)
    , Startup(other.Startup)
{}

ireTaskConstructorArg & ireTaskConstructorArg::operator = (const ireTaskConstructorArg & other)
{
    mtsGenericObject::operator = (other);
    Name = other.Name;
    Shell = other.Shell;
    Startup = other.Startup;
    return *this;
}

ireTaskConstructorArg::ireTaskConstructorArg(const std::string & newName, const IRE_Shell & newShell, const std::string & newStartup):
    mtsGenericObject()
    , Name(newName)
    , Shell(newShell)
    , Startup(newStartup)
{}

ireTaskConstructorArg::~ireTaskConstructorArg(void){}


void ireTaskConstructorArg::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->Name);
    cmnSerializeRaw(outputStream__cdg, this->Shell);
    cmnSerializeRaw(outputStream__cdg, this->Startup);
}


void ireTaskConstructorArg::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->Name);
    cmnDeSerializeRaw(inputStream__cdg, this->Shell);
    cmnDeSerializeRaw(inputStream__cdg, this->Startup);
}


void ireTaskConstructorArg::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void ireTaskConstructorArg::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<ireTaskConstructorArg >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<ireTaskConstructorArg >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 34 */
/* source line: 39 */
/* source line: 45 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const ireTaskConstructorArg & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, ireTaskConstructorArg & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void ireTaskConstructorArg::Copy(const ireTaskConstructorArg & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<std::string >::Copy(this->Name, source__cdg.Name);
    cmnData<IRE_Shell >::Copy(this->Shell, source__cdg.Shell);
    cmnData<std::string >::Copy(this->Startup, source__cdg.Startup);
}
void ireTaskConstructorArg::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->Name, outputStream__cdg);
    cmnData<IRE_Shell >::SerializeBinary(this->Shell, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->Startup, outputStream__cdg);
}
void ireTaskConstructorArg::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->Name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<IRE_Shell >::DeSerializeBinary(this->Shell, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->Startup, inputStream__cdg, localFormat, remoteFormat);
}
void ireTaskConstructorArg::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<IRE_Shell >::SerializeText(this->Shell, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->Startup, outputStream__cdg, delimiter__cdg);
}
std::string ireTaskConstructorArg::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsGenericObject >::SerializeDescription(*this, delimiter__cdg, userDescription__cdg);
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Name, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<IRE_Shell >::SerializeDescription(this->Shell, delimiter__cdg, prefix__cdg + "Shell");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->Startup, delimiter__cdg, prefix__cdg + "Startup");
    return description__cdg.str();
}
void ireTaskConstructorArg::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "ireTaskConstructorArg");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "ireTaskConstructorArg");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "ireTaskConstructorArg");
    }
    someData__cdg = true;
    cmnData<IRE_Shell >::DeSerializeText(this->Shell, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "ireTaskConstructorArg");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->Startup, inputStream__cdg, delimiter__cdg);
}
std::string ireTaskConstructorArg::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "ireTaskConstructorArg" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  Name:" << cmnData<std::string >::HumanReadable(this->Name);
    description__cdg << "  Shell:" << cmnData<IRE_Shell >::HumanReadable(this->Shell);
    description__cdg << "  Startup:" << cmnData<std::string >::HumanReadable(this->Startup);
    return description__cdg.str();
}
bool ireTaskConstructorArg::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<std::string >::ScalarNumberIsFixed(this->Name)
           && cmnData<IRE_Shell >::ScalarNumberIsFixed(this->Shell)
           && cmnData<std::string >::ScalarNumberIsFixed(this->Startup)
    ;
}
size_t ireTaskConstructorArg::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<std::string >::ScalarNumber(this->Name)
           + cmnData<IRE_Shell >::ScalarNumber(this->Shell)
           + cmnData<std::string >::ScalarNumber(this->Startup)
    ;
}
std::string ireTaskConstructorArg::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Name, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<IRE_Shell >::ScalarNumber(this->Shell);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<IRE_Shell >::ScalarDescription(this->Shell, index_cdg - baseIndex__cdg, prefix__cdg + "Shell");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Startup);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->Startup, index_cdg - baseIndex__cdg, prefix__cdg + "Startup");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: ireTaskConstructorArg index out of range"));
    return "";
}
double ireTaskConstructorArg::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<IRE_Shell >::ScalarNumber(this->Shell);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<IRE_Shell >::Scalar(this->Shell, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->Startup);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->Startup, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: ireTaskConstructorArg index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<ireTaskConstructorArg >::SerializeText(const ireTaskConstructorArg & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void ireTaskConstructorArg::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<std::string >::SerializeText(this->Name, jsonValue["Name"]);
    cmnDataJSON<IRE_Shell >::SerializeText(this->Shell, jsonValue["Shell"]);
    cmnDataJSON<std::string >::SerializeText(this->Startup, jsonValue["Startup"]);
}
template<>
void cmnDataJSON<ireTaskConstructorArg >::DeSerializeText(ireTaskConstructorArg & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void ireTaskConstructorArg::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->Name, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < Name");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: Name");
    };
    field__cdg = jsonValue["Shell"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<IRE_Shell >::DeSerializeText(this->Shell, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < Shell");
        }
    };
    field__cdg = jsonValue["Startup"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->Startup, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < Startup");
        }
    };
}
#endif // CISST_HAS_JSON


std::string cmnDataHumanReadable__IRE_Shell(const IRE_Shell & data) {
    switch (data) {
        case IRE_WXPYTHON:
            return "wxPython";
            break;
        case IRE_IPYTHON:
            return "iPython";
            break;
        default: return "undefined enum IRE_Shell";
            break;
    }
}

std::string IRE_ShellToString(const IRE_Shell & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case IRE_WXPYTHON:
            return "IRE_WXPYTHON";
            break;
        case IRE_IPYTHON:
            return "IRE_IPYTHON";
            break;
        default:
            break;
    }
    cmnThrow("IRE_ShellToString called with invalid enum");
    return "";
}

IRE_Shell IRE_ShellFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "IRE_WXPYTHON") {
        return IRE_WXPYTHON;
    };
    if (value == "IRE_IPYTHON") {
        return IRE_IPYTHON;
    };
    std::string message = "IRE_ShellFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = IRE_ShellVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<IRE_Shell >(0);
}

const std::vector<int> & IRE_ShellVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(IRE_WXPYTHON));
        vectorInt.push_back(static_cast<int>(IRE_IPYTHON));
    }
    return vectorInt;
}

const std::vector<std::string> & IRE_ShellVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("IRE_WXPYTHON");
        vectorString.push_back("IRE_IPYTHON");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(IRE_Shell, IRE_ShellToString, IRE_ShellFromString);
#endif // CISST_HAS_JSON

