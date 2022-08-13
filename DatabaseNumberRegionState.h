//
// Created by Fransiskus Agapa on 8/12/2022.
//

#ifndef FINDSUBSTRING_DATABASENUMBERREGIONSTATE_H
#define FINDSUBSTRING_DATABASENUMBERREGIONSTATE_H

#include <iostream>
#include "string"
using std::string;
using std::cout;
using std::endl;

bool regionState(const string& userAreaCode)
{
    bool numberExist = false;                                                                // indicate if number is valid or exist


    // Northeast USA
    string connecticut[] = {"203", "860", "475", "959"};                                     // list of number in each state
    for(size_t i = 0; i < sizeof (connecticut)/ sizeof (connecticut[0]); ++i)
    {
        if(connecticut[i] == userAreaCode)                                                   // if match then give the information
        {
            cout << "Region: Northeast US" << endl;
            cout << "State Connecticut " << endl;
            numberExist = true;                                                              // indicate number exist
            return true;
        }
    }

    string maine = "207";
    if(userAreaCode == maine)
    {
        cout << "Region: Northeast US" << endl;
        cout << "State: Maine " << endl;
        numberExist = true;
        return true;
    }

    string massachusetts[] = {"339", "351", "413", "508", "617", "774", "781", "857", "978"};
    for(size_t i = 0; i < sizeof (massachusetts)/sizeof (massachusetts[0]); ++i)
    {
        if(massachusetts[i] == userAreaCode)
        {
            cout << "Region: Northeast US" << endl;
            cout << "State: Massachusetts " << endl;
            numberExist = true;
            return true;
        }
    }

    string newHampshire = "603";
    if(userAreaCode == newHampshire)
    {
        cout << "Region: Northeast US" << endl;
        cout << "State: New Hampshire " << endl;
        numberExist = true;
        return true;
    }

    string newJersey[] = {"201", "551", "609",  "640", "732", "848", "856", "862", "908", "973"};
    for(size_t i = 0; i < sizeof (newJersey) / sizeof (newJersey[0]); ++i)
    {
        if(userAreaCode == newJersey[i])
        {
            cout << "Region: Northeast US" << endl;
            cout << "State: New Hampshire " << endl;
            numberExist = true;
            return true;
        }

    }

    string newYork[] = {"212", "315", "332", "347", "516", "585", "607", "631", "646", "680", "716", "718", "838", "845", "914", "917", "929", "934"};
    for(size_t i = 0; i < sizeof (newYork) / sizeof (newYork[0]); ++i)
    {
        if(userAreaCode == newYork[i])
        {
            cout << "Region: Northeast US" << endl;
            cout << "State: New York " << endl;
            numberExist = true;
            return true;
        }
    }

    string rhodeIsland = "401";
    if(userAreaCode == rhodeIsland)
    {
        cout << "Region: Northeast US" << endl;
        cout << "State: Rhode Island "<< endl;
        numberExist = true;
        return true;
    }

    string pennsylvania[] = {"215", "223", "267", "272", "412", "484", "610", "717", "724", "814", "878"};
    for(size_t i = 0; i < sizeof (pennsylvania) / sizeof (pennsylvania[0]); ++i)
    {
        if(userAreaCode == pennsylvania[i])
        {
            cout << "Region: Northeast US" << endl;
            cout << "State: Pennsylvania " << endl;
            numberExist = true;
            return true;
        }
    }

    string vermont = "802";
    if(userAreaCode == vermont)
    {
        cout << "Region: Northeast US" << endl;
        cout << "State: Vermont" << endl;
        numberExist = true;
        return true;
    }

    //Midwest USA
    string illinois[] = {"217", "224", "309", "312", "331", "618", "630", "708", "773", "779", "815", "847", "872"};
    for(size_t i = 0 ; i < sizeof (illinois) / sizeof (illinois[0]); ++i)
    {
        if(userAreaCode == illinois[i])
        {
            cout << "Region: Midwest US" << endl;
            cout << "State: Illinois" << endl;
            numberExist = true;
            return true;
        }
    }

    string indiana[] = {"219", "260", "317", "574", "765", "812", "930"};
    for(size_t i = 0 ; i < sizeof (indiana) / sizeof (indiana[0]); ++i)
    {
        if(userAreaCode == indiana[i])
        {
            cout << "Region: Midwest US" << endl;
            cout << "State: Indiana" << endl;
            numberExist = true;
            return true;
        }

    }

    string iowa[] = {"319", "515", "563", "641", "712"};
    for(size_t i = 0; i < sizeof (iowa) / sizeof (iowa[0]); ++i)
    {
        if(userAreaCode == iowa[i])
        {
            cout << "Region: Midwest US" << endl;
            cout << "State: Iowa" << endl;
            numberExist = true;
            return true;
        }
    }

    string kansas[] = {"316", "620", "785", "913"};
    for(size_t i = 0; i < sizeof (kansas) / sizeof (kansas[0]); ++i)
    {
        if(userAreaCode == kansas[i])
        {
            cout << "Region: Midwest US" << endl;
            cout << "State: Kansas" << endl;
            numberExist = true;
            return true;
        }
    }

    string michigan[] = {"231", "248", "269", "313", "517", "586", "616", "734", "810", "906", "947", "989", "679"};
    for(size_t i = 0; i < sizeof (michigan) / sizeof (michigan[0]); ++i)
    {
        if(userAreaCode == michigan[i])
        {
            cout << "Region: Midwest US" << endl;
            cout << "State: Michigan" << endl;
            numberExist = true;
            return true;
        }
    }

    string minnesota[] = {"218", "320", "507", "612", "651", "952"};
    for(size_t i = 0; i < sizeof (minnesota)/sizeof (minnesota[0]); ++i)
    {
        if(userAreaCode == minnesota[i])
        {
            cout << "Region: Midwest US" << endl;
            cout << "State: Minnesota" << endl;
            numberExist = true;
            return true;
        }
    }

    string missouri[] = {"314", "417", "573", "636", "660", "816"};
    for(size_t i = 0; i < sizeof (missouri)/sizeof (missouri[0]); ++i)
    {
        if(userAreaCode == missouri[i])
        {
            cout << "Region: Midwest US" << endl;
            cout << "State: Missouri" << endl;
            numberExist = true;
            return true;
        }
    }

    string nebraska[] = {"308", "402", "531"};
    for(size_t i = 0; i < sizeof (nebraska)/sizeof (nebraska[0]); ++i)
    {
        if(userAreaCode == nebraska[i])
        {
            cout << "Region: Midwest US" << endl;
            cout << "State: Nebraska" << endl;
            numberExist = true;
            return true;
        }
    }

    string northDakota= "701";
    if(userAreaCode == northDakota)
    {
        cout << "Region: Midwest US" << endl;
        cout << "State: North Dakota" << endl;
        numberExist = true;
        return true;
    }

    string ohio[] = {"216", "234", "326", "380", "419", "440", "513", "567", "614", "740", "937", "220"};
    for(size_t i = 0; i < sizeof (ohio)/sizeof (ohio[0]); ++i)
    {
        if(userAreaCode == ohio[i])
        {
            cout << "Region: Midwest US" << endl;
            cout << "State: Ohio" << endl;
            numberExist = true;
            return true;
        }
    }

    string southDakota = "605";
    if(userAreaCode == southDakota)
    {
        cout << "Region Midwest US" << endl;
        cout << "State: South Dakota" << endl;
        numberExist = true;
        return true;
    }

    string wisconsin[] = {"262", "414", "608", "534", "715", "920", "274"};
    for(size_t i = 0; i < sizeof (wisconsin)/sizeof wisconsin[0]; ++i)
    {
        if(userAreaCode == wisconsin[i])
        {
            cout << "Region: Midwest US" << endl;
            cout << "State: Wisconsin" << endl;
            numberExist = true;
            return true;
        }
    }

    //South USA
    string alabama[] = {"205", "251", "256", "334", "938"};
    for(size_t i = 0; i < sizeof (alabama)/sizeof (alabama[0]); ++i)
    {
        if(userAreaCode == alabama[i])
        {
            cout << "Region: South US" << endl;
            cout << "State: Alabama" << endl;
            numberExist = true;
            return true;
        }
    }

    string arkansas[] = {"479", "501", "870"};
    for(size_t i = 0; i < sizeof (arkansas)/sizeof (arkansas[0]); ++i)
    {
        if(userAreaCode == arkansas[i])
        {
            cout << "Region: South US" << endl;
            cout << "State: Arkansas" << endl;
            numberExist = true;
            return true;
        }
    }

    string delaware = "302";
    if(userAreaCode == delaware)
    {
        cout << "Region: South US" << endl;
        cout << "State: Delaware" << endl;
        numberExist = true;
        return true;
    }

    string florida[] = {"239", "305", "321", "352", "386", "407", "561", "686", "727", "754", "772", "772", "786", "813", "850", "863", "904", "941",  "954"};
    for(size_t i = 0; i < sizeof (florida) / sizeof (florida[0]); ++i)
    {
        if(userAreaCode == florida[i])
        {
            cout << "Region: South US" << endl;
            cout << "State: Florida" << endl;
            numberExist = true;
            return true;
        }
    }

    string georgia[] = {"229", "404", "470", "478", "678", "706", "762", "770", "912"};
    for(size_t i = 0; i < sizeof (georgia)/sizeof (georgia[0]); ++i)
    {
        if(userAreaCode == georgia[i])
        {
            cout << "Region: South US" << endl;
            cout << "State: Georgia" << endl;
            numberExist = true;
            return true;
        }
    }

    string kentucky[] = {"270", "364", "502", "606", "859"};
    for(size_t i = 0; i < sizeof (kentucky)/sizeof (kentucky[0]); ++i)
    {
        if(userAreaCode == kentucky[i])
        {
            cout << "Region: South US" << endl;
            cout << "State: Kentucky" << endl;
            numberExist = true;
            return true;
        }
    }

    string louisiana[] = {"225", "318", "337","504", "985"};
    for(size_t i = 0; i < sizeof (louisiana)/sizeof (louisiana[0]); ++i)
    {
        if(userAreaCode == louisiana[i])
        {
            cout << "Region: South US" << endl;
            cout << "State: Louisiana" << endl;
            numberExist = true;
            return true;
        }
    }

    string maryland[] = {"240", "301", "410", "443", "667"};
    for(size_t i = 0; i < sizeof (maryland)/sizeof (maryland[0]); ++i)
    {
        if(userAreaCode == maryland[i])
        {
            cout << "Region: South US" << endl;
            cout << "State: Maryland" << endl;
            numberExist = true;
            return true;
        }
    }

    string mississippi[] = {"228", "601", "662", "769"};
    for(size_t i = 0; i < sizeof (mississippi)/sizeof (mississippi[0]); ++i)
    {
        if(userAreaCode == mississippi[i])
        {
            cout << "Region: South US" << endl;
            cout << "State: Mississippi" << endl;
            numberExist = true;
            return true;
        }
    }

    string northCarolina[] = {"252", "336", "704", "743", "828", "910", "919", "980", "984"};
    for(size_t i = 0; i < sizeof (northCarolina)/sizeof (northCarolina[0]); ++i)
    {
        if(userAreaCode == northCarolina[i])
        {
            cout << "Region: South US" << endl;
            cout << "State: North Carolina" << endl;
            numberExist = true;
            return true;
        }
    }

    string oklahoma[] = {"405", "580", "918", "539"};
    for(size_t i = 0; i < sizeof (oklahoma)/sizeof (oklahoma[0]); ++i)
    {
        if(userAreaCode == oklahoma[i])
        {
            cout << "Region: South US" << endl;
            cout << "State: Oklahoma" << endl;
            numberExist = true;
            return true;
        }
    }

    string southCarolina[] = {"803", "843", "854", "864"};
    for(size_t i = 0; i < sizeof (southCarolina)/sizeof (southCarolina[0]); ++i)
    {
        if(userAreaCode == southCarolina[i])
        {
            cout << "Region: South US" << endl;
            cout << "State: South Carolina" << endl;
            numberExist = true;
            return true;
        }
    }

    string tennessee[] = {"423", "615", "629", "731", "865", "901", "931"};
    for(size_t i = 0; i < sizeof (tennessee)/sizeof (tennessee[0]);++i)
    {
        if(userAreaCode == tennessee[0])
        {
            cout << "Region: South US" << endl;
            cout << "State: Tennessee" << endl;
            numberExist = true;
            return true;
        }

    }

    string texas[] = {"210", "214", "254", "281", "325", "346", "361", "409", "430", "432", "469", "512", "682", "713", "726", "737", "806", "817", "830", "832", "903", "915", "936", "940", "956", "972", "979"};
    for(size_t i = 0; i < sizeof (texas)/sizeof (texas[0]);++i)
    {
        if(userAreaCode == texas[i])
        {
            cout << "Region: South US" << endl;
            cout << "State: Texas" << endl;
            numberExist = true;
            return true;
        }
    }

    string virginia[] = {"276", "434", "540", "571", "703", "757", "804"};
    for(size_t i = 0; i < sizeof (virginia)/sizeof (virginia[0]);++i)
    {
        if(userAreaCode == virginia[i])
        {
            cout << "Region: South US" << endl;
            cout << "State: Virginia" << endl;
            numberExist = true;
            return true;
        }
    }

    string westVirginia[] = {"304", "681"};
    for(size_t i = 0; i < sizeof (westVirginia)/sizeof (westVirginia[0]);++i)
    {
        if(userAreaCode == westVirginia[i])
        {
            cout << "Region: South US" << endl;
            cout << "State: West Virginia" << endl;
            numberExist = true;
            return true;
        }
    }

    //West USA
    string alaska = "907";
    if(userAreaCode == alaska)
    {
        cout << "Region: West US" << endl;
        cout << "State: Alaska" << endl;
        numberExist = true;
        return true;
    }

    string arizona[] = {"479", "501", "870"};
    for(size_t i = 0; i < sizeof (arizona)/sizeof (arizona[0]); ++i)
    {
        if(userAreaCode == arizona[i])
        {
            cout << "Region: West US" << endl;
            cout << "State: Arizona" << endl;
            numberExist = true;
            return true;
        }
    }

    string california[] = {"209", "213", "279", "310", "323", "341", "408", "415", "424", "442", "510", "530", "559", "562", "619", "626", "628", "650", "657"};
    for(size_t i = 0;i < sizeof (california)/sizeof (california[0]);++i)
    {
        if(userAreaCode == california[i])
        {
            cout << "Region: West US" << endl;
            cout << "State: California" << endl;
            numberExist = true;
            return true;
        }
    }

    string californiaCont[] = {"661", "669", "707", "714", "740", "760", "805", "818", "820", "831", "858", "909", "916", "925", "949", "951"};
    for(size_t i = 0;i < sizeof (californiaCont)/sizeof (californiaCont[0]);++i)
    {
        if(userAreaCode == californiaCont[i])
        {
            cout << "Region: West US" << endl;
            cout << "State: California (contd.)" << endl;
            numberExist = true;
            return true;
        }
    }

    string colorado[] = {"303", "719", "720", "970"};
    for(size_t i = 0; i < sizeof (colorado)/sizeof (colorado[0]);++i)
    {
        if(userAreaCode == colorado[i])
        {
            cout << "Region: West US" << endl;
            cout << "State: Colorado" << endl;
            numberExist = true;
            return true;
        }
    }

    string hawaii = "808";
    if(userAreaCode == hawaii)
    {
        cout << "Region: West US" << endl;
        cout << "State: Hawaii" << endl;
        numberExist = true;
        return true;
    }

    string idaho[] = {"208", "986"};
    for(size_t i = 0; i < sizeof (idaho)/sizeof (idaho[0]);++i)
    {
        if(userAreaCode == idaho[i])
        {
            cout << "Region: West US" << endl;
            cout << "State: Idaho" << endl;
            numberExist = true;
            return true;
        }
    }

    string montana = "406";
    if(userAreaCode == montana)
    {
        cout << "Region: West US" << endl;
        cout << "State: Montana" << endl;
        numberExist = true;
        return true;
    }

    string nevada[] = {"702", "725", "775"};
    for(size_t i = 0;i < sizeof (nevada)/sizeof (nevada[0]);++i)
    {
        if(userAreaCode == nevada[i])
        {
            cout << "Region: West US" << endl;
            cout << "State: Nevada" << endl;
            numberExist = true;
            return true;
        }
    }

    string newMexico[] = {"505", "575"};
    for(size_t i = 0; i < sizeof (newMexico)/sizeof (newMexico[0]);++i)
    {
        if(userAreaCode == newMexico[i])
        {
            cout << "Region: West US" << endl;
            cout << "State: New Mexico" << endl;
            numberExist = true;
            return true;
        }
    }

    string oregon[] = {"503", "541", "971", "458"};
    for(size_t i = 0; i < sizeof (oregon)/sizeof (oregon[0]);++i)
    {
        if(userAreaCode == oregon[i])
        {
            cout << "Region: West US" << endl;
            cout << "State: Oregon" << endl;
            numberExist = true;
            return true;
        }
    }

    string utah[] = {"435", "801", "385"};
    for(size_t i = 0; i < sizeof (utah)/sizeof (utah[0]);++i)
    {
        if(userAreaCode == utah[i])
        {
            cout << "Region: West US" << endl;
            cout << "State: Utah" << endl;
            numberExist = true;
            return true;
        }
    }

    string washington[] = {"206", "253", "360", "425", "509", "564"};
    for(size_t i = 0; i < sizeof (washington)/sizeof (washington[0]);++i)
    {
        if(userAreaCode == washington[i])
        {
            cout << "Region: West US" << endl;
            cout << "State: Washington" << endl;
            numberExist = true;
            return true;
        }
    }

    string wyoming = "307";
    if(userAreaCode == wyoming)
    {
        cout << "Region: West US" << endl;
        cout << "State: Wyoming" << endl;
        numberExist = true;
        return true;
    }

    if(!numberExist)                                                                   // number that user input is not valid phone number
    {
        cout << "\n[ Invalid phone number ]" << endl;
        return false;
    }

}
// source: https://www.freshworks.com/freshcaller-cloud-pbx/phone-numbers/us-area-codes/
#endif //FINDSUBSTRING_DATABASENUMBERREGIONSTATE_H
