
// clubman_p2_neg_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  -1.400000
 // --table_div  44.079277
 // --table_op  1.000000

struct tableclubman_p2_neg { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tableclubman_p2_neg_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tableclubman_p2_neg&() const { return *(tableclubman_p2_neg*)this; }
};

 static tableclubman_p2_neg_imp<200> clubman_p2_neg_table __rt_data = {
	0,0.833333,142.143,200, {
	0.000000000000,0.016897251263,0.032013058401,0.045706532431,0.058261951463,
	0.069904358368,0.080811908200,0.091125642198,0.100957224471,0.110395065936,
	0.119509171627,0.128354977524,0.136976387562,0.145408177557,0.153677898059,
	0.161807380585,0.169813929920,0.177711267942,0.185510280748,0.193219610101,
	0.200846121636,0.208395275511,0.215871419836,0.223278022968,0.230617857419,
	0.237893145447,0.245105674323,0.252256887583,0.259347957278,0.266379841166,
	0.273353328000,0.280269073372,0.287127628095,0.293929460669,0.300674975070,
	0.307364524820,0.313998424138,0.320576956752,0.327100382880,0.333568944749,
	0.339982870965,0.346342379963,0.352647682735,0.358898984992,0.365096488861,
	0.371240394231,0.377330899810,0.383368203959,0.389352505344,0.395284003453,
	0.401162898991,0.406989394196,0.412763693077,0.418486001602,0.424156527836,
	0.429775482050,0.435343076797,0.440859526967,0.446325049827,0.451739865042,
	0.457104194692,0.462418263275,0.467682297701,0.472896527286,0.478061183739,
	0.483176501146,0.488242715949,0.493260066925,0.498228795164,0.503149144042,
	0.508021359200,0.512845688513,0.517622382068,0.522351692135,0.527033873142,
	0.531669181648,0.536257876319,0.540800217902,0.545296469203,0.549746895063,
	0.554151762340,0.558511339888,0.562825898544,0.567095711110,0.571321052348,
	0.575502198973,0.579639429648,0.583733024995,0.587783267603,0.591790442049,
	0.595754834928,0.599676734895,0.603556432723,0.607394221382,0.611190396132,
	0.614945254658,0.618659097235,0.622332226944,0.625964949956,0.629557575900,
	0.633110418361,0.636623795544,0.640098031212,0.643533456009,0.646930409452,
	0.650289243070,0.653610325784,0.656894054393,0.660140879557,0.663351474707,
	0.666526670355,0.669666868421,0.672772096855,0.675842425500,0.678877957632,
	0.681878823252,0.684845173752,0.687777177696,0.690675017449,0.693538886513,
	0.696368987392,0.699165529906,0.701928729828,0.704658807812,0.707355988518,
	0.710020499923,0.712652572752,0.715252440028,0.717820336700,0.720356499340,
	0.722861165895,0.725334575475,0.727776968183,0.730188584968,0.732569667496,
	0.734920458039,0.737241199386,0.739532134748,0.741793507691,0.744025562055,
	0.746228541901,0.748402691442,0.750548254989,0.752665476901,0.754754601529,
	0.756815873169,0.758849536015,0.760855834113,0.762835011315,0.764787311239,
	0.766712977222,0.768612252281,0.770485379073,0.772332599853,0.774154156436,
	0.775950290159,0.777721241842,0.779467251752,0.781188559567,0.782885404338,
	0.784558024456,0.786206657618,0.787831540791,0.789432910183,0.791011001206,
	0.792566048445,0.794098285631,0.795607945608,0.797095260301,0.798560460690,
	0.800003776782,0.801425437582,0.802825671066,0.804204704154,0.805562762687,
	0.806900071401,0.808216853901,0.809513332640,0.810789728894,0.812046262743,
	0.813283153044,0.814500617418,0.815698872223,0.816878132537,0.818038612142,
	0.819180523501,0.820304077744,0.821409484652,0.822496952637,0.823566688729,
	0.824618898565,0.825653786366,0.826671554932,0.827672405625,0.828656538358,
	0.829624151583,0.830575442279,0.831510605945,0.832429836586,0.833333326708
	}
};

double always_inline clubman_p2_negclip(double x) {
    double f = fabs(x);
    f = f * clubman_p2_neg_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = clubman_p2_neg_table.data[0];
    } else if (i >= clubman_p2_neg_table.size-1) {
        f = clubman_p2_neg_table.data[clubman_p2_neg_table.size-1];
    } else {
    f -= i;
    f = clubman_p2_neg_table.data[i]*(1-f) + clubman_p2_neg_table.data[i+1]*f;
    }
    return copysign(f, x);
}

