/** @name API Types
 *  Basic API Types
 */
///@{

/** Some other define. */
#define ZECS_INS ((ecs_entity_t)1 << 63)

/** Function 2 in group 3. Details. */
void func2InGroup3() {}


/** Filters alllow for ad-hoc quick filtering of entity tables. */
typedef struct ecs_filter_t {
    ecs_type_t include;             /**< Components that should match */
    ecs_type_t exclude;             /**< Components that should not match */
    ecs_match_kind_t include_kind;  /**< Match kind for include components */
    ecs_match_kind_t exclude_kind;  /**< Match kind for exclude components */
} ecs_filter_t;

/** Function 4 in group 3. Details. */
void afunc2InGroup3() {}

/** The INSTANCEOF role indicates that the components from the entity should be
 * shared with the entity that instantiates the type. */
#define ECS_INSTANCEOF ((ecs_entity_t)1 << 63)

/** Function 1 in group 3. Details. */
void func1InGroup3() {}

/** Describes how a filter should match components with a table. */
typedef enum ecs_match_kind_t {
    EcsMatchDefault = 0,
    EcsMatchAll,            /**< Match all components in a type */
    EcsMatchAny,            /**< Match one of the components in a type */
    EcsMatchExact           /**< Match the type exactly */
} ecs_match_kind_t;

///@}

void funcNotInGroup1() {}
/** Function 1 in group 3. Details. */
void funcNotInGroup2() {}
