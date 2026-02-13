// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/terminal.cdg

#include <sawIntuitiveResearchKit/terminal.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 14 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(dvrk_terminalProxy);

dvrk::terminal::terminal(void):
    component()
    , interface()
{}

dvrk::terminal::terminal(const terminal & other):
    component(other.component)
    , interface(other.interface)
{}

dvrk::terminal & dvrk::terminal::operator = (const terminal & other)
{
    component = other.component;
    interface = other.interface;
    return *this;
}

dvrk::terminal::~terminal(void){}


void dvrk::terminal::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->component);
    cmnSerializeRaw(outputStream__cdg, this->interface);
}


void dvrk::terminal::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->component);
    cmnDeSerializeRaw(inputStream__cdg, this->interface);
}


void dvrk::terminal::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void dvrk::terminal::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<dvrk::terminal >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<dvrk::terminal >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 19 */
/* source line: 25 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const dvrk::terminal & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, dvrk::terminal & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void dvrk::terminal::Copy(const dvrk::terminal & source__cdg) {
    cmnData<std::string >::Copy(this->component, source__cdg.component);
    cmnData<std::string >::Copy(this->interface, source__cdg.interface);
}
void dvrk::terminal::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->component, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->interface, outputStream__cdg);
}
void dvrk::terminal::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->component, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->interface, inputStream__cdg, localFormat, remoteFormat);
}
void dvrk::terminal::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->component, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->interface, outputStream__cdg, delimiter__cdg);
}
std::string dvrk::terminal::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->component, delimiter__cdg, prefix__cdg + "component");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->interface, delimiter__cdg, prefix__cdg + "interface");
    return description__cdg.str();
}
void dvrk::terminal::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::terminal");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->component, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::terminal");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->interface, inputStream__cdg, delimiter__cdg);
}
std::string dvrk::terminal::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "dvrk::terminal" << std::endl;
    description__cdg << "  component:" << cmnData<std::string >::HumanReadable(this->component);
    description__cdg << "  interface:" << cmnData<std::string >::HumanReadable(this->interface);
    return description__cdg.str();
}
bool dvrk::terminal::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->component)
           && cmnData<std::string >::ScalarNumberIsFixed(this->interface)
    ;
}
size_t dvrk::terminal::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->component)
           + cmnData<std::string >::ScalarNumber(this->interface)
    ;
}
std::string dvrk::terminal::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->component);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->component, index_cdg - baseIndex__cdg, prefix__cdg + "component");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->interface);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->interface, index_cdg - baseIndex__cdg, prefix__cdg + "interface");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: dvrk::terminal index out of range"));
    return "";
}
double dvrk::terminal::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->component);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->component, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->interface);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->interface, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: dvrk::terminal index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<dvrk::terminal >::SerializeText(const dvrk::terminal & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void dvrk::terminal::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->component, jsonValue["component"]);
    cmnDataJSON<std::string >::SerializeText(this->interface, jsonValue["interface"]);
}
template<>
void cmnDataJSON<dvrk::terminal >::DeSerializeText(dvrk::terminal & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void dvrk::terminal::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["component"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->component, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < component");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: component");
    };
    field__cdg = jsonValue["interface"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->interface, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < interface");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: interface");
    };
}
#endif // CISST_HAS_JSON

