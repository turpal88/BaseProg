#pragma once
#ifdef FIGUREHIERARCHY_EXPORTS
#define FIGUREHIERARCHY_API __declspec(dllexport)
#else
#define FIGUREHIERARCHY_API __declspec(dllimport)
#endif
namespace FigureHierarchy {
    class Figure {

    private:
        int field;

    protected:
        FIGUREHIERARCHY_API Figure(int side_count);

    public:
        FIGUREHIERARCHY_API Figure();
        FIGUREHIERARCHY_API virtual void get_info();

        FIGUREHIERARCHY_API int get_side_count();
    };
}

