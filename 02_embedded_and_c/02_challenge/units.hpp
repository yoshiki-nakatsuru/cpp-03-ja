#pragma once

namespace temperature {
    struct kelvin {
        double value;
        explicit kelvin(double v) : value(v) {}
    };
}

namespace pressure {
    struct psi {
        double value;
        explicit psi(double v) : value(v) {}
    };
}
